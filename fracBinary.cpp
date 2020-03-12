/*
D:\C\fracBinary.cpp
Avinal Kumar
January 30, 2019
Fraction to binary converter
*/

#include <iostream>
#include <cmath>
#include <string>

std::string fractionBinary(float frac)
{
    float addenum;
    std::string fracBinary = "0.";
    int i = 7;
    while (frac != 0 && i--)
    {
        frac *= 2;
        frac = modff(frac, &addenum);
        if (addenum == 0)
        {
            fracBinary.append("0");
        }
        else if (addenum == 1)
        {
            fracBinary.append("1");
        }
    }

    return (fracBinary);
}

int main()
{
    float in;
    std::cin >> in;
    std::string out = fractionBinary(in);
    std::cout << in << " = " << out << std::endl;
    return 0;
}