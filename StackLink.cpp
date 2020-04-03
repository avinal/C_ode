#include <iostream>
#include <map>
#include <string>
#include <functional>
class stack
{
    class node
    {
        int data;
        node *next;

    public:
        node(int d, node *n) : data(d), next(n) {}
        int nodeData() { return this->data; }
        node *nodeNext() { return this->next; }
    };

public:
    node *top = nullptr;
    int size = 0;
    void push(int data);
    void pop(int data = 0);
    void display(int data = 0);
    std::map<std::string, std::function<void(int)>> stackMap = {
        {"push", this->push},
        {"pop", this->pop},
        {"display", this->display}};
};

void stack::push(int data)
{

    if (this->top == nullptr)
    {
        auto var = new node(data, nullptr);
        this->top = var;
        this->size++;
    }
    else
    {
        auto var = new node(data, this->top);
        this->top = var;
        this->size++;
    }
}

void stack::pop(int data = 0)
{
    if (this->top == nullptr)
    {
        std::cerr << "Stack Underflow !!" << std::endl;
    }
    else
    {
        auto toDelete = this->top;
        this->top = this->top->nodeNext();
        std::cout << "The value being deleted is "
                  << toDelete->nodeData() << std::endl;
        this->size--;
        delete toDelete;
    }
}

void stack::display(int data = 0)
{
    auto var = this->top;
    std::cout << "[ ";
    while (var->nodeNext() != nullptr)
    {
        std::cout << var->nodeData() << " ";
    }
}

int main(int argc, char const *argv[])
{
    stack myStack;
    int input;
    std::string action;
    std::cout<<"Please enter operation with appropiate oparand"<<
    std::cin >> input;

    while (!action.compare("end"))
    {
        
    }

    return 0;
}
