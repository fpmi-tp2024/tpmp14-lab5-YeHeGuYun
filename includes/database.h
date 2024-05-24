// includes/database.h
#ifndef DATABASE_H
#define DATABASE_H
#include <sqlite3.h>
int db_connect(sqlite3 **db, const char *filename);
int db_create_tables(sqlite3 *db);
int db_add_country(sqlite3 *db, const char *name);
int db_add_region(sqlite3 *db, const char *country_name, const char *region_name, int population);
int db_delete_country(sqlite3 *db, const char *name);
void db_list_countries(sqlite3 *db);
void db_list_regions(sqlite3 *db, const char *country_name);
void db_average_population(sqlite3 *db, const char *country_name);
void db_total_population(sqlite3 *db);
#endif
