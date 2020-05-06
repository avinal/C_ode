/*
D:\C\C_ode\postorder.cpp
Avinal Kumar
May 06, 2020
Creating a binary  tree.
PostOrder traversal of tree without using recursion
*/
#include <iostream>

struct node
{
    node *left;
    int data;
    node *right;
    bool traversed;
    node(int d = 0)
        : left(nullptr), right(nullptr), data(d), traversed(false) {}
};

void postorder(node *n)
{
    node *temp = n;
    while (!temp->traversed && temp)
    {
        if (temp->left && !temp->left->traversed)
        {
            temp = temp->left;
        }
        else if (temp->right && !temp->right->traversed)
        {
            temp = temp->right;
        }
        else
        {
            std::cout << temp->data << " ";
            temp->traversed = true;
            temp = n;
        }
    }
}

int main(int argc, char const *argv[])
{
    node *root = new node(6);
    root->left = new node(3);
    root->right = new node(13);
    root->left->left = new node(8);
    root->left->right = new node(11);
    root->right->left = new node(4);
    root->right->right = new node(9);
    postorder(root);
    return 0;
}
