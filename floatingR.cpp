#include <iostream>
#include <string>
#include <sstream>

long int decimal2binary(int num);
int main()
{
    int num;
    std::cin >> num;
    long binary = decimal2binary(num);
    std::ostringstream intStr;
    intStr << binary;
    std::string binaryStr = intStr.str();
}

long int decimal2binary(int num)
{
    int remi, expo = 1;
    long bina = 0;
    while (num > 0)
    {
        remi = num % 2;
        bina = bina + remi * expo;
        expo = expo * 10;
        num = num / 2;
    }
    return (bina);
}