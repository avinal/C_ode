/*
/mnt/d/C/metapro2.cpp
Avinal Kumar
March 31, 2020
A metaprogram to calculate factorial of a number.
*/
#include <iostream>

template <unsigned int N>
struct factorial
{
    static unsigned long const value =
        factorial<N - 1>::value * N;
};

template <>
struct factorial<1>
{
    static unsigned long const value = 1;
};

unsigned long five = factorial<5>::value;

int main(int argc, char const *argv[])
{
    factorial<5> f;
    std::cout << f.value;
    return 0;
}
