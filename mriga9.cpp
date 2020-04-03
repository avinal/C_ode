#include <iostream>

unsigned long update(unsigned long n)
{
    if (n < 2 && n >= 0)
    {
        return 1;
    }
    else
    {
        return n * update(n - 2);
    }
}
int main(int argc, char const *argv[])
{
    unsigned long x;
    std::cin >> x;
    unsigned long result = update(x);
    unsigned long trail = 0;
    while (result % 5 == 0 && result % 2 == 0)
    {
        result /= 10;
        trail++;
    }
    std::cout << trail << std::endl;
    return 0;
}
