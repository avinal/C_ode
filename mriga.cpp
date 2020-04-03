#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int test;
    cin >> test;
    int m, n;
    while (test--)
    {
        cin >> n >> m;
        vector<int> eat;
        int k;
        for (int i = 0; i < m; i++)
        {
            cin >> k;
            eat.push_back(k);
        }
        int count = ((m % n == 0) ? (m / n) : (m / n) + 1), p = 0;

        for (int j = 0; j < count; j++)
        {
            vector<int>::const_iterator first = eat.begin() + p;
            vector<int>::const_iterator last;
            if (m < n)
            {
                last = eat.end();
            }
            else
            {
                last = first + n;
                p += n;
                m-=n;
            }
            vector<int> small(first, last);
            sort(small.begin(), small.end());
            auto dub = unique(small.begin(), small.end());
            bool found = (dub == small.end());
            if (!found)
            {
                cout << "NO\n";
                break;
            }
            else
            {
                continue;
            }
            cout << "YES\n";
        }
    }
    system("pause");
    return 0;
}