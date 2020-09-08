#include <iostream>
#include <map>
#include <sqlite3.h>

#include "main.hpp"
#include "database.hpp"

// initialize static data member
std::map<const char*, const char*> Database::m_results;

// constructor
Database::Database(const char* dbName) {
  LOG("Opening Database");
  Database::m_exit = sqlite3_open(dbName, &(Database::m_db));
  if(Database::m_exit) {
    std::cerr << "Failed to open Database :: " << sqlite3_errmsg(Database::m_db) << "\n";
  }
}

// destructor
Database::~Database() {
  sqlite3_close(Database::m_db);
  LOG("Database Closed Successfully");
}

// query execution :: no results expected from query
void
Database::exec(const char *sql) {
  char* err;
  Database::m_exit = sqlite3_exec(Database::m_db, sql, nullptr, 0, &err);

  if(Database::m_exit != SQLITE_OK) {
    std::cerr << "Failed to Execute Query :: " << err << "\n";
    sqlite3_free(err);
  } else {
    LOG("Query Executed Successfully");
  }
}

// query execution :: results expected from query
void
Database::fetch(const char *sql) {
  /*
    argc: Number of record returned
    argv: record value
    azColName: name of the column
  */

  auto callback = [](void *NotUsed, int argc, char **argv, char **azColName) {
    for (int i = 0; i < argc; i++) {
      Database::m_results.insert(std::make_pair(azColName[i], argv[i]));
    }
    return 0;
  };

  // execute requested query
  char* err;
  Database::m_exit = sqlite3_exec(Database::m_db, sql, callback, 0, &err);

  if(Database::m_exit != SQLITE_OK) {
    std::cerr << "Failed to Execute Query :: " << err << "\n";
    sqlite3_free(err);
  } else {
    LOG("Query Executed Successfully");
  }
}

std::map<const char*, const char*>
Database::results() {
  return Database::m_results;
}