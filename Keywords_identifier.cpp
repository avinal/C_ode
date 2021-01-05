/**
 * Compiler Design Lab CSD-319
 * Submitted by :- Avinal Kumar, 185067
 * Write a program to recognize Identifiers and Keywords.
 * 04 September 2020
 */

#include <iostream>
#include <regex>
class Key_Identify
{
private:
    std::string input;
    std::string keywords[10] =
        {"if", "else", "while", "printf", "scanf", "switch", "case", "for", "break", "default"};

public:
    Key_Identify(std::string in) : input(in) {}
    bool is_keyword()
    {
        for (auto i : keywords)
        {
            if (i == input)
            {
                return true;
                break;
            }
        }
        return false;
    }
    bool is_valid_identifier()
    {
        if (input.at(0) >= '0' && input.at(0) <= '9')
        {
            return false;
        }
        std::regex spcchar("[@!#$%^&*?/|~:]");
        if (std::regex_search(input, spcchar) != 0)
        {
            return false;
        }
        return true;
    }

    void check()
    {
        if (is_keyword())
        {
            std::cout << "This string is a keyword" << std::endl;
        }
        else if (is_valid_identifier())
        {
            std::cout << "This string is an identifier" << std::endl;
        }
        else
        {
            std::cout << "The string is not identifier and not keyword" << std::endl;
        }
    }
};

int main(int argc, char const *argv[])
{
    std::cout << "Enter a string to check" << std::endl;
    std::string input;
    std::cin >> input;
    Key_Identify check(input);
    check.check();
    return 0;
}
