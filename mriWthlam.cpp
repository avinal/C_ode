/*

/mnt/d/C/movieMri.cpp
Avinal Kumar
February 15, 2020
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int request;
        cin >> request;
        vector<vector<int>> showTime(4, vector<int>(4));
        char movie;
        int show;
        for (int i = 0; i < request; i++)
        {
            cin >> movie >> show;
            int clm = movie - 'A';
            int row = show / 3 - 1;
            showTime[clm][row]++;
        }
        vector<int> maxer(4);

        for (int i = 0; i < 4; i++)
        {
            maxer[i] = *max_element(showTime[i].begin(), showTime[i].end());
        }

        sort(maxer.rbegin(), maxer.rend());
        int rs = 100;
        for (int k = 0; k < 4; k++)
        {
            if (maxer[k])
            {
                maxer[k] *= rs;
                rs -= 25;
            }
            else
            {
                maxer[k] -= 100;
            }
        }

        int profit = accumulate(maxer.begin(), maxer.end(), 0);
        cout << profit << endl;
    }
    return 0;
}
