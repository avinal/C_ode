/*
D:\C\template1.cpp
Avinal Kumar
March 27, 2020
Function Template to calculate maximum of two
*/

#include <iostream>
#include <type_traits>
template <typename T1, typename T2>
auto maximum(T1 a, T2 b) -> typename std::decay<decltype(true ? a : b)>::type
{
    return (a > b ? a : b);
}

int main(int argc, char const *argv[])
{
    std::cout << maximum(2, 6.5) << std::endl;
    std::cout << maximum(2.6, 7) << std::endl;
    std::cout << maximum("avii", "krish");
    system("pause");
    return 0;
}
