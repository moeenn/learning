import concurrent.futures
import foxhq
import db
from log import Log
import sys


def inspectGallery(url, log):
	totalImages = foxhq.scopeGallery(url)
	return (url, totalImages)


def scopeMultipleGalleryLinks(links, log, max_workers=5):
	with concurrent.futures.ThreadPoolExecutor(max_workers=max_workers) as executor:
		futures = [executor.submit(inspectGallery, link, log) for link in links]

	result = []

	for future in concurrent.futures.as_completed(futures):
		url, totalImages = future.result()
		log.write(f"Gallery: {url} - Images: ", totalImages)
		result.append({ "url": url, "totalImages": totalImages })

	return result


def inspectAndSavePage(conn, url, log):
	log.write("Scoping: ", url)
	links = foxhq.scopePage(url)

	pageDetails = scopeMultipleGalleryLinks(links, log)

	with conn:
		for detail in pageDetails:
				log.write("Adding to DB: ", (detail.get("url"), detail.get("totalImages")))
				db.saveGallery(conn, detail.get("url"), detail.get("totalImages"))

	return f"Page Completed: {url}"


if __name__ == "__main__":
	log = Log()

	baseURL = "https://foxhq.com/showgals.php?page="
	conn = db.connect()

	try:
		with concurrent.futures.ThreadPoolExecutor(max_workers=1) as executor:
			futures = [executor.submit(inspectAndSavePage, conn, f"{baseURL}{page}", log) for page in range(1, 370) ]

		for future in concurrent.futures.as_completed(futures):
			log.write(future.result())

	except KeyboardInterrupt:
		print("Keyboard Interrupt - Exiting Gracefully ...")
		sys.exit(0)

	except Exception as error:
		print("Error: ", error)