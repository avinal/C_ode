/*
D:\C\metapro5.cpp
Avinal Kumar
April 02, 2020
A metaprogram to calculate factorial
*/
#include <iostream>

template <unsigned int N>
struct factorial
{
    enum
    {
        value = N * factorial<N - 1>::value
    };
};

template <>
struct factorial<0>
{
    enum
    {
        value = 1
    };
};

int main(int argc, char const *argv[])
{
    std::cout << factorial<7>::value << std::endl;
    system("pause");
    return 0;
}
