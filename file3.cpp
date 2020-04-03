#include <bits/stdc++.h>
#include <fstream>
using namespace std;

class reFile
{
public:
    void displayFile();
    void modifyFile();
};

void reFile::displayFile()
{
    
}

int main()
{
    ofstream outfile("prog.cpp");
    cout << "Enter the program" << endl;
    string progLine;
    while (true)
    {
        getline(cin, progLine);
        if (!progLine.compare("stop"))
        {
            break;
        }
        outfile << progLine << "\n";
    }
    outfile.close();
    string str = "g++ prog.cpp -o prog";

    const char *command = str.c_str();
    system(command);
    cout << "Running the file" << endl;
    system("./prog");
    return 0;
}