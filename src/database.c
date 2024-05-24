// src/database.c
#include "database.h"
#include <stdio.h>
#include <stdlib.h>
int db_connect(sqlite3 **db, const char *filename) {
    int rc = sqlite3_open(filename, db);
    if (rc) {
        fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(*db));
        return 0;
    } else {
        fprintf(stderr, "Opened database successfully\n");
    }
    return 1;
}
// Implement other database functions...
