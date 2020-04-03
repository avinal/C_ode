#include <iostream>
#include <map>
#include <functional>
#include <string>
template <class Q>
Q add(Q i, Q j)
{
    return i + j;
}

template <class T>
T sub(T i, T j)
{
    return i - j;
}

template <class P>
std::map<std::string, std::function<P(P, P)>> mappr;

int main()
{
mappr["add"]=add;
    std::string input;
    int a, b;
    std::cin >> input >> a >> b;
    std::cout << "Result is" << mappr[input](a, b);
    return 0;
}