/*
D:\C\metapro3.cpp
Avinal Kumar
March 31, 2020
A metaprogram to compute Fibonacci Series
*/

#include <iostream>

template <int N>
struct fibonacci
{
    
    static int const value =
        fibonacci<N - 1>::value + fibonacci<N - 2>::value;

        
};

template <>
struct fibonacci<1>
{
    static int const value = 1;
};

template <>
struct fibonacci<0>
{
    static int const value = 0;
};

int main(int argc, char const *argv[])
{
    fibonacci<30> f;
    std::cout << f.value << std::endl;
    return 0;
}
