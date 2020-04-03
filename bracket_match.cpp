/*
D:\C\bracket_match.cpp
Avinal Kumar
March 27, 2020
Implementation of bracket matching program 
for checking algebric expression
*/
#include <iostream>
#include <vector>
#include <cassert>

template <typename T>
class Stack
{
    std::vector<T> elements;

public:
    Stack(){};
    void push(T const &element);
    T pop();
    T const &top() const;
    bool empty() const
    {
        return elements.empty();
    }
    void print_stack(std::ostream &strm) const
    {
        for (auto &&i : elements)
        {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    }

    friend std::ostream &operator<<(std::ostream &strm, Stack<T> s)
    {
        s.print_stack(strm);
        return strm;
    }
};

template <typename T>
void Stack<T>::push(T const &element)
{
    this->elements.push_back(element);
}

template <typename T>
T Stack<T>::pop()
{
    assert(!this->elements.empty());
    T element = this->elements.back();
    this->elements.pop_back();
    return element;
}

int main(int argc, char const *argv[])
{
    Stack<char> bracket;
    std::cout << "Enter the alzebric expression to be checked" << std::endl;
    std::string expression, start = "({[", end = ")}]";
    std::cin >> expression;
    for (char i : expression)
    {
        if (start.find(i) != std::string::npos)
        {
            bracket.push(i);
        }
        else if (end.find(i) != std::string::npos)
        {
            if (bracket.empty())
            {
                std::cerr << "Expression is invalid" << std::endl;
                system("pause");
                return 1;
            }
            char ket = bracket.pop();
            if (start.find(ket) != end.find(i))
            {
                std::cerr << "Expression is invalid" << std::endl;
                system("pause");
                return 1;
            }
        }
        std::cout << bracket;
    }
    std::cout << "Expression is valid" << std::endl;
    system("pause");
    return 0;
}
