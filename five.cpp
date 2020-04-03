#include <bits/stdc++.h>

int main()
{
    int a = 10000;
    while (a * 10 + 1 != 3*a + 300000)
    {
        a++;
    }
    std::cout << a << std::endl;
    return 0;
}