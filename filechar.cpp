#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
  /*  string str;
    getline(cin, str);
    ofstream oFile("maina.txt");
    for (int i = 0; i < str.size(); i++)
    {
        oFile.put(str.at(i));
    }*/
    cout << "File written" << endl;
    ifstream inFile("maina.txt");
    char ch;
    while (inFile)
    {
        inFile.get(ch);
        cout << ch;
    }
    return 0;
}
