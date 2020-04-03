#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
class count
{
    char name[15];
    int code;

public:
    count() {}
    count(char *c, int nc)
    {
        strcpy(name, c);
        code = nc;
    }
};

int main()
{
    count cxt[3];
    cxt[1] = count("Avi", 1);
    cxt[0] = count("Kri", 2);
    cxt[2] = count("We", 3);

    fstream fioe;
    fioe.open("me.dat", ios::in | ios::out);
    for (int i = 0; i < 3; i++)
    {
        fioe.write(reinterpret_cast<char *>(&cxt[i]), sizeof(cxt[i]));
    }
    fioe.seekg(0, ios::end);
    int end = fioe.tellg();
    cout << "The number of objects in file " << end;
    return 0;
}