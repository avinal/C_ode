#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int minTime, maxTime, hrs, days, input[2];
    cin >> days >> hrs;
    vector<pair<int, int>> dyhr;
    for (int i = 0; i < days; i++)
    {
        cin >> input[0] >> input[1];
        dyhr.emplace_back(input[0], input[1]);
    }
    
}