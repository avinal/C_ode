/*
D:\C\doubleStack.cpp
Avinal Kumar
February 3, 2020
Double Stack Implementation in arrays
*/

#include <iostream>

int main(int argc, char const *argv[])
{
    int n1, n2;
    std::cout << "Enter the sizes of two stacks" << std::endl;
    std::cin >> n1 >> n2;
    int MAX = n1 + n2;
    int stack[MAX];
    std::cout << "Enter the elements of stack 1 put -1 to stop" << std::endl;
    int input = 0, i = 0;
    std::cin >> input;
    do
    {
        stack[i] = input;
        std::cin >> input;
        i++;
    } while (input != -1);
    std::cout << "Enter elements of second stack" << std::endl;
    while (MAX != i)
    {
        std::cin >> input;
        stack[MAX - 1] = input;
        MAX--;
    }
    for (auto x : stack)
    {
        std::cout << x << " ";
    }
    return 0;
}
