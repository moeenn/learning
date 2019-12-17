import requests, lxml
from bs4 import BeautifulSoup
import os
import concurrent.futures


class Gallery:
	def __init__(self, url):
		self.url = url
		self.total_images = 0

	@property
	def name(self):
		return self.url.split('/')[3]

	# count images in gallery
	# page doesn't contain full image urls
	def scope_gallery(self):
		page_source = requests.get(self.url, timeout=30).text
		print(f'Requesting URL: {self.url}')
		soup = BeautifulSoup(page_source, 'lxml')
		content_table = soup.find_all('table')[3]
		image_anchors = content_table.find_all('a')
		self.total_images = len(image_anchors)

		return self.total_images

	# generate the urls of gallery images
	@property
	def image_urls(self):
		urls = []

		if self.total_images != 0:
			for count in range(1, self.total_images + 1):
				url = f'{self.url}{count}.jpg'
				urls.append(url)

		return urls

	def check_directories(self):
		target_directory = os.path.join('./galleries', self.name)

		# create target directory if not present
		if not os.path.exists(target_directory):
			os.makedirs(target_directory)
			print(f'Directory Created: {target_directory}')

		return target_directory


	def download(self):
		# lower order function
		def save_image(url):
			print(f'Requesting Image: {url}')
			response = requests.get(url, timeout=30).content
			target_directory = self.check_directories()
			filename = url.split('/')[4]
			target_file = os.path.join(target_directory, filename)

			with open(target_file, 'wb') as file:
				file.write(response)

			return f'Image Saved: {filename}'

		with concurrent.futures.ThreadPoolExecutor(max_workers=10) as executor:
			futures = [executor.submit(save_image, url) for url in self.image_urls]

			for future in concurrent.futures.as_completed(futures):
				try:
					print(future.result())
				except Exception as err:
					print(f'Error: {err}')