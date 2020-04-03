#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long int n;
    int z, x, p;
    cin >> n;
    z = 0;
    x = 1;
    p = 0;
    for (long int i = 2; i < n; i++)
    {
        for (int j = 1; j * j <= i; j++)
        {
            (i % j == 0) ? z++ : z;
        }
        if (z == 2)
        {
            x *= i;
            p++;
        }
        z = 0;
        if (x >= n)
        {
            break;
        }
    }
    cout << p;
    system("pause");
    return 0;
}
