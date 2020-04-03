/*

/mnt/d/C/Trees.cpp
Avinal Kumar
February 12, 2020
*/
#include <iostream>

class tree
{
private:
    struct node
    {

        struct node *left;
        int data;
        struct node *right;
        node(node *l, int d, node *r)
        {
            this->left = l;
            this->right = r;
            this->data = d;
        }
    };

    node *root = nullptr;

public:
    tree();

    void addNode(int d);
};

void tree::addNode(int d)
{
    auto leaf = new node(nullptr, d, nullptr);
    
}
