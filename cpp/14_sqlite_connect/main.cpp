#include "database.hpp"
#include <iostream>
#include <vector>

struct User {
  const int id;
  const std::string name;

  User(int id, std::string name) : id(id), name(name) {}
};

void create_users_table(const Database &db) {
  const char *ddl_query = "CREATE TABLE IF NOT EXISTS users ( \
		id     INTEGER PRIMARY KEY NOT NULL, \
		name   VARCHAR (100) \
		);";

  db.exec(ddl_query);
}

void add_user(const Database &db, const User &u) {
  char query[200];
	std::sprintf(query, "INSERT INTO users VALUES (%d, '%s')", u.id, u.name.c_str());
  db.exec(query);
}

std::vector<User> get_users(const Database &db, const char *&query) {
  const auto &results = db.fetch<User>(query);
  return results;
}

int main() {
  Database db("example.db");

	const User u(1, "Muhammad Moeen");
	add_user(db, u);

  const char *query = "SELECT * FROM users;";
  const std::vector<User> users = get_users(db, query);

  for (const User &user : users) {
    std::cout << user.id << " :: " << user.name << "\n";
  }

  return 0;
}
