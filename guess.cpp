#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    long n;
    cin >> n;
    long first = 1;
    long last = n;
    while (1)
    {
        char ch;
        long mid = (first + last) / 2;
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
        cout << mid << endl;
        cin >> ch;
        if (ch == 'E')
        {
            break;
        }
        else if (ch == 'L')
        {
            last = mid - 1;
        }
        else if (ch == 'G')
        {
            first = mid + 1;
        }
    }
    return 0;
}
