#include <stdio.h>
#include <sqlite3.h>
int main(int argc, char const *argv[])
{
    sqlite3 *new_db;
    char *errmsg = 0;
    int reco;
    reco =sqlite3_open("test.db", &new_db);
    if(reco){
        fprintf(stderr, "Unable to open database : %s\n",sqlite3_errmsg(new_db));
        return 0;
    }
    else
    {
        fprintf(stderr,"Opened database successfully\n");
    }
    sqlite3_close(new_db);
    return 0;
}
