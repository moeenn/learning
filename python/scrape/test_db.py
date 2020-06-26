import db

testCases = [
	{
		"url": "https://foxhq.com/ewa-sonnet-sexy-black-dress/",
		"totalImages": 12
	},
	{
		"url": "https://foxhq.com/luna-bunny-sexxxy-time-scoreland/",
		"totalImages": 8
	},
	{
		"url": "https://foxhq.com/xo-gisele-seductive-fuck-me-eyes/",
		"totalImages": 12
	},
	{
		"url": "https://foxhq.com/luna-bunny-sexxxy-time-scoreland/", # dublicate record
		"totalImages": 8
	}
]

def test_saveAndRetrieve():
	conn = db.connect(":memory:")

	with conn:
		# test saving of galleries
		for testCase in testCases:
			db.saveGallery(conn, testCase.get("url"), testCase.get("totalImages"))

		# test retrieval
		for (testCase, record) in zip(testCases, db.getAll(conn)):
			assert testCase.get("url") == record[1]
			assert testCase.get("totalImages") == record[2]
