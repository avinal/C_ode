#include <iostream>
#include <fstream>
#include <boost/algorithm/string/trim.hpp>

int main(int argc, char const *argv[])
{
    std::string input;
    std::cin >> input;
    std::fstream file(input.c_str(), std::ios::in | std::ios::binary);
    char cutset[80];
    while (true)
    {
        
        file.read(cutset, 80);
        int position = file.tellg();
        // read 80 character
        std::string word(cutset);

        std::string key_; /*Seperates keyword and value*/

        key_ = word.substr(0, 8);
        boost::trim(key_);
        if (!key_.compare("END")) //Stop reading condition
        {
            std::cout << key_ << " " << position << std::endl;
        }
        if (!key_.compare("XTENSION")) //Stop reading condition
        {
            file.seekg(0, std::ios::end);
            
            std::cout << key_ << " " << position << std::endl;
            std::cout << file.tellg() << std::endl;
            file.close();
            break;
        }
    }
    system("pause");
    return 0;
}
