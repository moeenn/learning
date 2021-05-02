import foxhq

scopePageTestCases = [
	{
		"input": "https://foxhq.com/showgals.php",
		"outputLength": 32
	},
	{
		"input": "https://foxhq.com/showgals.php?page=41",
		"outputLength": 32
	}
]

scopeGalleryTestCases = [
	{
		"input": "https://foxhq.com/ewa-sonnet-sexy-black-dress/",
		"output": 12
	},
	{
		"input": "https://foxhq.com/luna-bunny-sexxxy-time-scoreland/",
		"output": 9
	},
	{
		"input": "https://foxhq.com/fiona-siciliano-green-bikini-pinupfiles-video/",
		"output": 0
	},
	{
		"input": "https://foxhq.com/brooklyn-chase-naked-bedroom-video/",
		"output": 0
	},
	{
		"input": "https://foxhq.com/aria-giovanni-bath/",	# empty gallery page
		"output": 0
	},
	{
		"input": "https://foxhq.com/bianca-beauchamp-latex/",	# redirect to home
		"output": 0
	}
]

def test_scopePage():
	for testCase in scopePageTestCases:
		links = foxhq.scopePage(testCase.get("input"))
		receivedLinks = len(links)
		assert receivedLinks == testCase.get("outputLength")


def test_scopeGallery():
	for testCase in scopeGalleryTestCases:
		totalImages = foxhq.scopeGallery(testCase.get("input"))
		assert totalImages == testCase.get("output")