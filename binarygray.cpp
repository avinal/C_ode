/*

D:\C\binarygray.cpp
Avinal Kumar
October 21, 2019
Binary to Gray Converter
*/
#include <iostream>
#include <string>

class gray
{
    std::string binary;

public:
    gray(std::string a) : binary(a) {}
    /*
    Converter function to convert binary to gray.
    */
    std::string convert()
    {
        std::string final = "";
        final = final + binary.at(0);
        for (int i = 0; i < binary.length() - 1; i++)
        {
            if (binary.at(i) == binary.at(i + 1))
            {
                final = final + '0';
            }
            else
            {
                final = final + '1';
            }
        }
        return final;
    }
};

int main()
{
    std::string binary;

    std::cout << "Enter a binary number" << std::endl;
    std::cin >> binary;
    gray newcon(binary);
    binary = newcon.convert();
    std::cout << binary << std::endl;
    system("pause");
    return 0;
}