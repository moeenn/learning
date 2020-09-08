#include <iostream>
#include <map>
#include "database.hpp"

int main() {
	Database db("example.db");

	const char* ddl_query =
		"CREATE TABLE IF NOT EXISTS users ( \
		id     INTEGER PRIMARY KEY NOT NULL, \
		name   VARCHAR (100) \
		);";

	db.exec(ddl_query);

	const char* dml_create_records =
		"INSERT INTO users VALUES (1, 'Muhammad Moeen'); \
		INSERT INTO users VALUES (2, 'Haseeb Raza');";

	db.exec(dml_create_records);

	const char* dml_fetch_records = "SELECT * FROM users;";
	db.fetch(dml_fetch_records);

	const auto results = db.results();
	for (const auto& result : results) {
		std::cout << result.first << " :: " << result.second << "\n";
	}

	return 0;
}
