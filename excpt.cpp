#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    try
    {
        if (b!=0)
        {
            cout << "Result =" << a / b << endl;
        }
        else
        {
            throw(b);
        }
    }
    catch (int b)
    {
        std::cerr << "Divisor cant be 0" << '\n';
    }
    catch (char b)
    {
        cerr << "Enter a number" << endl;
    }
    return 0;
}