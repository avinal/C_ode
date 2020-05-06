/*
/mnt/d/C/C_ode/string_jumble.cpp
Avinal Kumar
May 06, 2020
A program to produce all possible combination of a string.
*/
#include <iostream>
#include <string>
#include <algorithm>

/**
 * Recursive program to produce recusion tree.  
 */
void jumble(std::string input, int sindex, int eindex)
{
    if (sindex == eindex)
    {
        std::cout << input << std::endl;
    }
    else
    {
        for (int i = sindex; i <= eindex; i++)
        {
            std::swap(input[i], input[sindex]);
            jumble(input, sindex + 1, eindex);
            std::swap(input[i], input[sindex]);
        }
    }
}

int main(int argc, char const *argv[])
{
    std::cout << "Enter a string" << std::endl;
    std::string input;
    std::cin >> input;
    int len = input.length();
    jumble(input, 0, len - 1);
    return 0;
}
