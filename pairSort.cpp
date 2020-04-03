/*
Sorts a vectors of pair
/mnt/d/C/pairSort.cpp
Avinal Kumar
February 04, 2020
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(int argc, char const *argv[])
{
    vector<pair<int, char>> toSort;
    int input;
    char name = 'A';
    cin >> input;
    while (input != -1)
    {
        toSort.emplace_back(input, name);
        name++;
        cin >> input;
    }
    sort(toSort.begin(), toSort.end());
    for_each(toSort.begin(), toSort.end(),
             [](pair<int, char> &element) {
                 cout << element.first << " " << element.second << endl;
             });
    return 0;
}
