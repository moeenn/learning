import requests, lxml
from bs4 import BeautifulSoup
import concurrent.futures
from Log import Log

# data classes
class Model:
	def __init__(self, name, total_pages):
		self.name = name.strip().title()
		self.pages = int(total_pages)
		self.gallery_links = []
		self.galleries_file = Log(f'{self.name} - galleries.txt')
		self.errors_file = Log(f'{self.name} - errors.txt')

	@property
	def search_string(self):
		result = self.name.lower()
		result = result.replace(' ', '+')
		return result

	def __repr__(self):
		return f'Name: {example.name} \tSearch String: {example.search_string} \tPages: {example.pages}'

	# gather galleries on single search result page
	def scope_page(self, page_num):
		URL = f'https://www.foxhq.com/searchgal.php?search={self.search_string}&page={page_num}'
		print(f'Requesting URL: {URL}')

		try:
			page_source = requests.get(URL, timeout=30).text
		except Exception as err:
			print(f'Error: {err}')
			self.errors_file.write(URL)
		else:
			soup = BeautifulSoup(page_source, 'lxml')
			content_table = soup.find_all('table')[4]
			gallery_anchors = content_table.find_all('a')

			current_page_galleries = []
			for index, anchor in enumerate(gallery_anchors):
				link = anchor['href']

				if not link.startswith('javascript'):
					if link not in self.gallery_links:
						current_page_galleries.append(link)
						self.gallery_links.append(link)

			return current_page_galleries

	# scope all pages
	def scope_galleries(self):
		with concurrent.futures.ThreadPoolExecutor() as executor:
			futures = [executor.submit(self.scope_page, page) for page in range(1, self.pages + 1)]

			for future in concurrent.futures.as_completed(futures):
				try:
					self.galleries_file.write(future.result())
				except Exception as err:
					print(f'Error: {err}')