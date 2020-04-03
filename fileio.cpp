#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    char ch = 'x';
    int j = 47;
    double d = 4.789;
    string str1 = "Krish";
    string str2 = "Avii";

    ofstream myFile("adata.vi");

    myFile << ch
           << j
           << ' '
           << d
           << str1
           << ' '
           << str2;
    cout << "file written\n";
    return 0;
}