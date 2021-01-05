/**
 * Compiler Design Lab CSD-319
 * Submitted by :- Avinal Kumar, 185067
 * Write a program to recognize identifiers.
 * 04 September 2020
 */

#include <iostream>
#include <regex>

class Identifiers
{
private:
    std::string input;

public:
    Identifiers(std::string in) : input(in) {}
    bool is_valid_identifier()
    {
        if (input.at(0) >= '0' && input.at(0) <= '9')
        {
            std::cerr << "String starts with a number !!" << std::endl;
            return false;
        }
        std::regex spcchar("[@!#$%^&*?/|~:]");
        if (std::regex_search(input, spcchar) != 0)
        {
            std::cerr << "Illegeal character found" << std::endl;
            return false;
        }
        std::cout << "String is a valid identifier :)" << std::endl;
        return true;
    }
};

int main(int argc, char const *argv[])
{
    std::cout << "Enter a string to check" << std::endl;
    std::string input;
    std::cin >> input;
    Identifiers identify(input);
    bool result = identify.is_valid_identifier();
    std::cout << (result ? "True" : "False") << std::endl;
    return 0;
}
