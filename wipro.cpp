/*
D:\C\wipro.cpp
Avinal Kumar
March 12, 2020
Wipro Placement interview Question
Arranges and creates a dictonary in lexicographical order
*/
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
int main()
{
  std::string textInput;
  std::getline(std::cin, textInput);
  std::istringstream spliter(textInput);
  std::vector<std::string> storestr;
  int i = 0;
  do
  {
    std::string word;
    spliter >> word;
    storestr.push_back(word);
    i++;
  } while (spliter);
  unsigned int size = storestr.size();
  std::sort(storestr.begin(), storestr.end());
  std::vector<std::string>::iterator dup;
  dup = std::unique(storestr.begin(), storestr.end());
  storestr.resize(std::distance(storestr.begin(), dup));

  for (auto i : storestr)
  {
    std::cout << i << std::endl;
  }

  if (storestr.size() == size)
  {
    std::cout << "NA" << std::endl;
  }

  return 0;
}