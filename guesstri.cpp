#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    long n;
    cin >> n;
    vector<pair<long, long>> parts;
    parts.push_back(make_pair(1, n / 2));
    parts.push_back(make_pair(n / 2, n));
    while (1)
    {

        for (size_t i = 0; i < parts.size(); i++)
        {
            if (parts[i].first == parts[i].second)
            {
                char ch;
                cout << parts[i].first << endl;
                cin >> ch;
                if (ch == 'E')
                {
                    return 0;
                }
                else
                {
                    if (i != 0)
                    {
                        pair<long, long> temp = parts[i - 1];
                        parts[i - 1] = make_pair(temp.first, (temp.first + temp.second) / 2);
                        parts[i] = make_pair((temp.first + temp.second) / 2, temp.second);
                    }
                    else if (parts.size() >= 2)
                    {
                        pair<long, long> temp = parts[i + 1];
                        parts[i] = make_pair(temp.first, (temp.first + temp.second) / 2);
                        parts[i + 1] = make_pair((temp.first + temp.second) / 2, temp.second);
                    }
                }
            }
        }

        char c[4];
        long curr = (parts[1].first + parts[1].second) / 2;
        cout << curr << endl;
        cin >> c[0];
        if (c[0] == 'E')
        {
            return 0;
        }
        else
        {
            if (c[0] == 'G')
            {
                long curr1 = (parts[0].first + parts[0].second) / 2;
                cout << curr1 << endl;
                cin >> c[1];
                if (c[1] == 'G')
                {
                    parts[0].first = curr1 + 1;
                    continue;
                }
                else if (c[1] == 'L')
                {
                    parts[0].second = curr1 - 1;
                    parts[1].first = curr + 1;
                    continue;
                }
                else if (c[1] == 'E')
                {
                    return 0;
                }
            }
            else if (c[0] == 'L')
            {
                long curr1 = (curr + parts[1].second) / 2;
                cout << curr1 << endl;
                cin >> c[1];
                if (c[1] == 'L')
                {
                    parts[1].second = curr1 - 1;
                    continue;
                }
                else if (c[1] == 'G')
                {
                    int q = 31;
                    while (q--)
                    {
                        char c;
                        cout << 1 << endl;
                        cin >> c;
                        if (c == 'E')
                        {
                            return 0;
                        }
                        else if (c == 'L')
                        {
                            break;
                        }
                    }
                    curr1 = (curr + parts[1].second) / 2;
                    cout << curr1 << endl;
                    cin >> c[1];
                    if
                    continue;
                }
                else if (c[1] == 'E')
                {
                    return 0;
                }
            }
        }
    }
    return 0;
}
