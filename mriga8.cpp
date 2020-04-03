#include <iostream>
#include <cmath>
int main(int argc, char const *argv[])
{
    long health, limit = 1, expo = 0;
    std::cin >> health;
    while (health >= limit)
    {
        limit *= 2;
        expo++;
    }
    long attack = pow(2, expo) - 1;
    std::cout << attack << std::endl;
    return 0;
}
