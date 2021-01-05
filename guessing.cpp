#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    long n;
    cin >> n;
    long first = 1, last = n;
    bool guessed = false;
    while (1)
    {
        char ch;
        long btw = (first + last) / 2;
        long q = 31;
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
        cout << btw << endl;
        cin >> ch;
        if (ch == 'E')
        {
            return 0;
        }
        else if (ch == 'L')
        {
            last = btw - 1;
        }
        else if (ch == 'G')
        {
            first = btw + 1;
        }
    }
    while (!guessed)
    {
        char ver[4];
        long mid = (first + last) / 2;
        cout << mid << endl;
        cin >> ver[0];

        if (ver[0] != 'E')
        {
            cout << mid << endl;
            cin >> ver[1];
        }
        else
        {
            guessed = true;
            break;
        }
        if (ver[0] == ver[1])
        {
            if (ver[0] == 'L')
            {
                last = mid - 1;
                continue;
            }
            else if (ver[0] == 'G')
            {
                first = mid + 1;
                continue;
            }
        }
        else if (ver[1] == 'L')
        {
            long mud = first + 1 + (last - first + 1) / 4;
            cout < < < < endl;
            cin >> ver[2];

            if (ver[2] == 'L')
            {
                last = ((first + last) / 2) - 1;
                continue;
            }
            else if (ver[2] == 'G')
            {
                cout << first + 2 + (last - first + 1) / 4 << endl;
                cin >> ver[3];

                if (ver[3] == 'G')
                {
                    last = first + 1 + (last - first + 1) / 4;
                    continue;
                }
                else if (ver[3] == 'L')
                {
                    first = first + 1 + (last - first + 1) / 4;
                    continue;
                }
                else
                {
                    guessed = true;
                    break;
                }
            }
            else if (ver[2] == 'E')
            {
                guessed = true;
                break;
            }
        }
        else if (ver[1] == 'G')
        {
            cout << last - (last - first + 1) / 4 << endl;
            cin >> ver[2];

            if (ver[2] == 'L')
            {
                cout << 1 << endl;
                cin >> ver[3];

                if (ver[3] == 'G')
                {
                    first += 2;
                    continue;
                }
                else if (ver[3] == 'L')
                {
                    last -= ((last - first + 1) / 4 + 1);
                    continue;
                }
                else
                {
                    guessed = true;
                    break;
                }
            }
            else if (ver[2] == 'G')
            {
                first = (first + last) / 2 + 1;
                continue;
            }
            else if (ver[2] == 'E')
            {
                guessed = true;
                break;
            }
        }
    }
    return 0;
}
