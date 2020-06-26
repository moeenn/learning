from bs4 import BeautifulSoup
import requests

def download(url):
	res = requests.get(url, timeout=10)
	return res.text


def createSoup(source):
	return BeautifulSoup(source, 'lxml')


# gather gallery links on a single page
def scopePage(url):
	source = download(url)
	soup = createSoup(source)

	table = soup.find_all('table')[4]
	links = table.find_all('a')

	result = []

	for link in links:
		linkHref = link.get('href')
		if linkHref.startswith('showgals.php?'):
			pass
		else:
			result.append(linkHref)

	return result


# count images on a gallery page
def scopeGallery(url):
	source = download(url)
	soup = createSoup(source)

	# check if video page
	video = soup.find_all('video')
	if video:
		return 0

	# handle empty gallery pages
	try:
		table = soup.find_all('table')[3]
	except IndexError:
		return 0

	links = table.find_all('a')

	# handle home redirects
	if len(links) < 6:
		return 0

	return len(links)