#include <bits/stdc++.h>
using namespace std;
int greatCD(int, int);
int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    int gcd = greatCD(num1, num2);
    cout << gcd;
    return 0;
}
int greatCD(int num1, int num2)
{
    if (num1 % num2 == 0)
    {
        return (num2);
    }
    else
    {
        return (greatCD(num2, num1 % num2));
    }
}