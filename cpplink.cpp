#include <iostream>
#include <memory>

struct node
{
    int data;
    node *next;
};

class linkedlist
{
    node *head;

public:
    linkedlist()
    {
        this->head = nullptr;
    }
    void addData(int data);
    void displayData();
};

linkedlist *START = nullptr;

void linkedlist::addData(int data)
{
    node *myList = new node;
    node *varNode = new node;
    varNode=head;
    if(head==nullptr){
        myList->data=data;
        
    }
}