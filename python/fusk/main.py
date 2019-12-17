import os
import requests
import concurrent.futures

class Gallery:
	def __init__(self, url):
		self.url = url

	@property
	def image_count(self):
		number = self.url.split('-')[-1].split('.')[0]
		return int(number)

	@property
	def image_urls(self):
		base_url = self.url.replace(f'{self.image_count}.jpg', '')
		image_urls = []

		for count in range(1, self.image_count+1):
			url = f'{base_url}{count}.jpg'
			image_urls.append(url)

		return image_urls

	@property
	def target_dir(self):
		gallery_dir = f'{self.url.split("/")[5].split(".")[0]}-{self.url.split("/")[4]}'
		target_dir = os.path.join('galleries', gallery_dir)

		if not os.path.exists(target_dir):
			os.makedirs(target_dir)
			print(f'Directory Created: {target_dir}')

		return target_dir


class Download:
	@staticmethod
	def download(url, location):
		filename = url.split('-')[-1]
		file_path = os.path.join(location, filename)

		print(f'Requesting URL: {url}')
		response = requests.get(url, timeout=20)
		if response.ok:
			with open(file_path, 'wb') as file:
				file.write(response.content)

		return f'Download Completed: {filename}'


	@staticmethod
	def download_all(urlArray, location):
		with concurrent.futures.ThreadPoolExecutor(max_workers=10) as executor:
			futures = []

			for url in urlArray:
				future = executor.submit(Download.download, url, location)
				futures.append(future)

			for future in concurrent.futures.as_completed(futures):
				print(future.result())


if __name__ == '__main__':
	while True:
		url = input('Enter URL: ')
		gallery = Gallery(url)

		try:
			Download.download_all(gallery.image_urls, gallery.target_dir)
		except Exception as err:
			print(f'Error: {err}')
