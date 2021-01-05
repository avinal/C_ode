#include <iostream>
#include <vector>
#include <utility>
using namespace std;
int main()
{
    int test, it = 0;
    cin >> test;
    while (it != test)
    {
        int n, in;
        vector<pair<int, bool>> v;
        int max = -1;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> in;
            if (max < in)
            {
                max = in;
            }
            v.emplace_back(in, max == in);
        }
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (v[j].second && v[j - 1].first < v[j].first)
            {
                if (j == n - 1)
                {
                    count++;
                }
                else if (v[j].first > v[j + 1].first)
                    count++;
            }
            else if (j == 0 && v[j].first > v[j + 1].first)
            {
                count++;
            }
        }
        it++;
        cout << "Case #" << it << ": " << count << (it != test) ? "\n" : "";
    }

    return 0;
}
