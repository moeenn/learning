import sqlite3

def connect(dbFile="./scraped_db/testing.db"):
	conn = sqlite3.connect(dbFile, check_same_thread=False)
	__createSchema(conn)
	return conn


def __createSchema(conn):
	query = '''
		CREATE TABLE IF NOT EXISTS galleries (
			id INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL,
			url VARCHAR (150) UNIQUE NOT NULL,
			totalImages INTEGER NOT NULL DEFAULT 0
		);
	'''
	conn.cursor().execute(query)
	conn.commit()


def saveGallery(conn, url, totalImages):
	query = '''
		INSERT INTO galleries (url, totalImages) VALUES (?, ?);
	'''
	try:
		data = (url, totalImages)
		conn.cursor().execute(query, data)
	except sqlite3.IntegrityError as err:
		print("Gallery already exists: ", url)

	conn.commit()


def getAll(conn):
	query = '''
		SELECT * FROM galleries
	'''
	records = conn.cursor().execute(query).fetchall()
	return list(records)


# def saveGallery(conn, url):
# 	query = '''
# 		INSERT INTO galleries (url) VALUES (?);
# 	'''
# 	try:
# 		conn.cursor().execute(query, (url,))
# 	except sqlite3.IntegrityError as err:
# 		print("Gallery already exists: ", url)

# 	conn.commit()


# def saveImageCount(conn, url, totalImages):
# 	query = '''
# 		UPDATE galleries
# 		SET totalImages = ?
# 		WHERE url = ?;
# 	'''
# 	data = (totalImages, url)
# 	conn.cursor().execute(query, data)
# 	conn.commit()