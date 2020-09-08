#ifndef DATABASE_H_
#define DATABASE_H_

#include <sqlite3.h>
#include <map>

class Database {
private:
	sqlite3 *m_db;
	int m_exit;
	static std::map<const char*, const char*> m_results;

public:
	Database(const char*);
	~Database();
	// queries not ruturning anything
	void exec(const char *);

	// queries returning records
	// records stored im m_results;
	void fetch(const char *);
	std::map<const char*, const char*> results();
};

#endif