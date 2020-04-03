/*
D:\C\template2.cpp
Avinal Kumar
March 27, 2020
Class template and implementation of stack
*/
#include <iostream>
#include <vector>

template <typename T>
class Stack
{
    std::vector<T> elements;

public:
    Stack(){};
    void push(T const &element);
    void pop();
    T const &top() const;
    bool empty() const
    {
        return elements.empty();
    }
    void print_stack(std::ostream &strm) const{
        for (auto &&i : elements)
        {
            std::cout << i << " ";
        }
        
    }
};

template <typename T>
void Stack<T>::push(T const &element)
{
    this->elements.push_back();
}

template <typename T>
void Stack<T>::pop()
{
    assert(!this->elements.empty());
    this->elements.pop_back();
}

template <typename T>
T const &Stack<T>::top() const
{
    assert(!this->elements.empty());
    return this->elements.back();
}

int main(int argc, char const *argv[])
{
    Stack<int> stk;
    std::cout << "Enter elements of stack, enter -1 to stop";

    return 0;
}
