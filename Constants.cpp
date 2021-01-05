/**
 * Compiler Design Lab CSD-319
 * Submitted by :- Avinal Kumar, 185067
 * Write a program to recognize Constants.
 * 04 September 2020
 */

#include <iostream>
#include <algorithm>

class Constants
{
private:
    std::string input;

public:
    Constants(std::string in) : input(in) {}
    bool isConstant()
    {
        if (input.at(0) == '\"' && input.at(input.length() - 1) == '\"')
        {
            std::cout << "String constant found" << std::endl;
            return true;
        }
        else if (input.at(0) == '\'' && input.at(2) == '\'' && input.length() == 3)
        {
            std::cout << "Character constant found" << std::endl;
            return true;
        }
        else if (!input.empty() && std::all_of(input.begin(), input.end(), ::isdigit))
        {
            std::cout << "Integer found" << std::endl;
            return true;
        }
        else
        {
            std::cerr << "Not a valid constant" << std::endl;
            return false;
        }
    }
};

int main(int argc, char const *argv[])
{
    std::cout << "Enter an string to check" << std::endl;
    std::string input;
    std::cin >> input;
    Constants cnsts(input);
    bool result = cnsts.isConstant();
    std::cout << (result ? "True" : "False") << std::endl;
    return 0;
}
