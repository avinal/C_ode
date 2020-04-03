#include <stdio.h>
#include <stdlib.h>
#include <sqlite3.h>

static int callback(void *notused, int argc, char **argv, char **azcolon)
{
    for (int i = 0; i < argc; i++)
    {
        printf("%s = %s\n", azcolon[i], argv[i] ? argv[i] : "NULL");
    }
    printf("\n");
    return 0;
}

int main(int argc, char const *argv[])
{
    sqlite3 *newdb;
    char *error=0;
    int read;
    char *sql;

    read = sqlite3_open("test.db", &newdb);
    if(read)
    {
        fprintf(stderr, "Unable to open : %s\n",sqlite3_errmsg(newdb));
        return 0;
    }
    else {
        fprintf(stdout, "Opening Successful\n");
    }
    sql ="Create table Company"
    return 0;
}
