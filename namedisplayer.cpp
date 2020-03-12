/*
D:\C\namedisplayer.cpp
Avinal Kumar
March 12, 2020
Displays Name as letters repsentation calligraphy
      A       
     A A      
    A   A     
   A     A    
  A A A A A   
 A         A  
A           A 
Dependency calli.txt
*/

#include <iostream>
#include <fstream>
#include <map>
#include <vector>
#include <algorithm>

std::map<char, int> seek_map{
    {'a', 0},
    {'b', 118},
    {'c', 216},
    {'d', 321},
    {'e', 426},
    {'f', 517},
    {'g', 608},
    {'h', 713},
    {'i', 818},
    {'j', 909},
    {'k', 1000},
    {'l', 1105},
    {'m', 1196},
    {'n', 1315},
    {'o', 1413},
    {'p', 1532},
    {'q', 1630},
    {'r', 1749},
    {'s', 1847},
    {'t', 1938},
    {'u', 2029},
    {'v', 2148},
    {'w', 2267},
    {'x', 2386},
    {'y', 2491},
    {'z', 2589}};

class Calligraphy
{
    std::string name;
    std::vector<int> string_map;

public:
    Calligraphy(std::string NM) : name(NM) {}
    void displayer();
    void string_mapper();
};

void Calligraphy::string_mapper()
{
    std::string low_copy = name;
    std::transform(low_copy.begin(), low_copy.end(), low_copy.begin(), ::tolower);
    for (int i = 0; i < name.size(); i++)
    {
        string_map.push_back(seek_map.at(low_copy.at(i)));
    }
}

void Calligraphy::displayer()
{
    string_mapper();
    int length = name.size();
    std::ifstream name_file("calli.txt");

    char actor = '1';
    for (int k = 0; k < 7; k++)
    {
        for (int j = 0; j < length; j++)
        {
            char letter = name.at(j);
            name_file.seekg(string_map.at(j));
            while (true)
            {
                name_file.get(actor);
                if (actor == '1')
                {
                    std::cout << letter;
                }
                else if (actor == '0')
                {
                    break;
                }
                else if (actor == ' ')
                {
                    std::cout << actor;
                }
            }
            actor = '1';
            string_map.at(j) = name_file.tellg();
        }
        std::cout << std::endl;
    }
}

int main()
{
    std::string name;
    std::cout << "Enter a name with string size less than 10 :" << std::endl;
    std::cin >> name;
    Calligraphy myName(name);
    myName.displayer();
    system("pause");
    return 0;
}