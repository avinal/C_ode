/*
/mnt/d/C/metapro1.cpp
Avinal Kumar
March 31, 2020
A simple metaprogram to calculate decimal equivalent of
a binary number.
*/
#include <iostream>
template <unsigned long N>
struct binary
{
    static unsigned const value =
        binary<N / 10>::value << 1 | N % 10;
};

template <>
struct binary<0>
{
    static unsigned const value = 0;
};


int main(int argc, char const *argv[])
{

    binary<1243> b;
    std::cout << b.value;
    return 0;
}

