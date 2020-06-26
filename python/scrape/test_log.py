from log import Log
import os

testFile = "tmp.txt"

testCases = [
	"this is a message",
	"this is another message",
	"lorem ipsum",
	"he who sows the wind must reap the whirl-wind"
]

def setup_module(module):
	global log
	log = Log(testFile)


def teardown_module(module):
	os.remove(testFile)


# single threaded test
def test_write():
	global log
	for testCase in testCases:
		log.write(testCase, " 30")

	with open(testFile, "rt") as file:
		content = file.read()

		for testCase in testCases:
			assert testCase in content
