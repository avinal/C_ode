#include <iostream>
#include <fstream>
#include <algorithm>
#include <unordered_map>
#include <set>
#include <istream>
#include <iomanip>

int main(int argc, char const *argv[])
{
    std::unordered_map<std::string, int> keywords;
    std::ifstream kfile("keywords.txt");
    std::string key;
    while (kfile >> key)
    {
        keywords[key] = 0;
    }
    std::ifstream cfile(argv[1]);
    char ch;
    std::set<std::string> words;

    while (cfile >> std::noskipws >> ch)
    {
        if (::isdigit(ch))
        {
            continue;
        }
        else if (::isalpha(ch))
        {
            std::string alphastr = "";
            alphastr += ch;
            cfile >> std::noskipws >> ch;
            while (::isdigit(ch) || ::isalpha(ch) || ch == '_' || ch == '$')
            {
                alphastr += ch;
                cfile >> std::noskipws >> ch;
            }
            if (keywords.find(alphastr) != keywords.end())
            {
                keywords.at(alphastr) += 1;
            }
            else
            {
                words.insert(alphastr);
            }
            cfile.putback(ch);
        }
    }
    cfile.close();

    std::cout << "The keywords and their occourance in the file are:-"
              << std::endl;
    std::cout << "Keywords   "
              << "Occourance" << std::endl;
    for (auto it : keywords)
    {
        if (it.second != 0)
        {
            std::cout << std::setw(10) << it.first
                      << std::setw(5) << it.second << std::endl;
        }
    }
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Identifiers found are:- " << std::endl;
    for (auto ip : words)
    {
        std::cout << ip << " ";
    }
    std::cout << std::endl;
    return 0;
}
