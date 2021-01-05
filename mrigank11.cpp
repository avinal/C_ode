/*
D:\C\C_ode\mrigank11.cpp
Avinal Kumar
April 09, 2020
Program Description
*/
#include <iostream>
#include <vector>

int main(int argc, char const *argv[])
{
    int test;
    std::cin >> test;
    while (--test)
    {
        int size;
        std::cin >> size;
        std::vector<int> array;
        array.reserve(size);
        int count = 0, input;
        for (int i = 0; i < size; i++)
        {
            std::cin >> input;
            array.push_back(input);
            if (array[i] % 4 == 0 || array[i] % 2 == 0)
            {
                count++;
            }
        }
        for (int i = 1; i<size)
    }
    return 0;
}
