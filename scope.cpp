#include <iostream>

int m = 10;

int main()
{
    int m = 20;
    {
        int k = m;
        int m = 30;
        std::cout << "k =" << k << std::endl
                  << "m =" << m << std::endl
                  << "::m =" << ::m << std::endl;
    }
    std::cout << "m =" << m << std::endl
              << "::m =" << ::m << std::endl;
    return 0;
}