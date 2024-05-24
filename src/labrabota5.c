
// src/labrabota5.c
#include "database.h"
#include "countries.h"
#include <sqlite3.h>
#include <stdio.h>
int main() {
    sqlite3 *db;
    if (!db_connect(&db, "/Users/zhengzhiwen/labraboty/labrabota5/countries.db")) {
        return 1;
    }
    // Create tables if needed
    db_create_tables(db);
    // CLI loop or menu to interact with the application
    // Example:
    add_country_interface();
    sqlite3_close(db);
    return 0;
}
