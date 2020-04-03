#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> contestWin, contestLos;
    int con;
    bool imp;
    for (int i = 0; i < n; i++)
    {
        cin >> con >> imp;
        if (imp)
        {
            contestWin.push_back(con);
        }
        else
        {
            contestLos.push_back(con);
        }
    }
    int luck = 0;
    sort(contestWin.begin(), contestWin.end());
    int length = contestWin.size();
    for (int j = 0; j < length - k; j++)
    {
        luck -= contestWin[0];
        contestWin.erase(contestWin.begin());
    }
    luck=accumulate(contestWin.begin(), contestWin.end(), luck);
    luck=accumulate(contestLos.begin(), contestLos.end(), luck);
    cout << luck << endl;
    
    return 0;
}