import os
from Model import Model
from Gallery import Gallery
import sys

def create_galleries_file(name, pages):
	model = Model(name, pages)
	model.scope_galleries()
	return model.galleries_file.filename

def download_from_file(galleries_file):
	with open(galleries_file, 'rt') as file:
		for url in file:
			url = url.strip()
			gallery = Gallery(url)
			gallery.scope_gallery()
			gallery.download()

if __name__ == '__main__':
	model_name = sys.argv[1]
	pages = sys.argv[2]

	file = create_galleries_file(model_name, pages)
	galleries_file = file
	print(galleries_file)
	download_from_file(galleries_file)