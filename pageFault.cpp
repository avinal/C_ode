/*
Calculates number of page fault
/mnt/d/C/pageFault.cpp
Avinal Kumar
February 11, 2020
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

void FIFO(string page)
{
    cout << "Enter the frame size" << endl;
    int size;
    cin >> size;
    string frame = "";
    int fault = 0;
    for (int i = 0; i < page.size(); i++)
    {
        if (frame.find(page.at(i)) == string::npos)
        {
            if (frame.size() != size)
            {
                frame += page.at(i);
            }
            else
            {
                frame.front() = page.at(i);
            }
            fault++;
        }
    }

    cout << "Total page fault is " << fault << endl;
}

int main(int argc, char const *argv[])
{
    string pageString = "";
    int input;
    cout << "Enter the page replacement string." << endl
         << "Enter -1 to end" << endl;
    cin >> input;
    while (input != -1)
    {
        char add = 'A';
        add += input;
        pageString += add;
        cin >> input;
    }
    FIFO(pageString);
    return 0;
}
