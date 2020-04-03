#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    char ch;
    int j;
    double d;
    string str1, str2;

    ifstream readFile("adata.vi");
    readFile >> ch >> j >> d >> str1 >> str2;

    cout << ch << endl
         << j << endl
         << d << endl
         << str1 << endl
         << str2 << endl;
    return 0;
}