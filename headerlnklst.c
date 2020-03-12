/*
D:\C\headerlnklst.c
Avinal Kumar
February 5, 2019
Header Linked list Implemetation
*/

#include <malloc.h>
#include <stdio.h>
#include <stdlib.h>
struct headernode
{
    struct headernode *prev;
    int data;
    struct headernode *next;
};
typedef struct headernode node;
node *start = NULL;
node *create_hll(node *);
node *display_hll(node *);

int main()
{
    int choice;
    do
    {
        printf("\n*****Header Linked List Operations*****");
        printf("\n1. Create a header linked list");
        printf("\n2. Display a header linked list");
        printf("\n3. EXIT");
        printf("\nEnter your choice no.");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            start = create_hll(start);
            printf("\nHeader linked list created");
            break;
        case 2:
            start = display_hll(start);
            break;
        }
    } while (choice != 3);
    return 0;
}

node *create_hll(node *first)
{
    node *new_node, *var_node;
    int number;
    printf("\nEnter -1 to end");
    printf("\nEnter the data");
    scanf("%d", &number);
    new_node = (node *)malloc(sizeof(node));
    (*new_node).data = number;
    (*new_node).next = NULL;
    while (number != -1)
    {
        if (first == NULL)
        {
            first = (node *)malloc(sizeof(node));
            (*first).next = new_node;
        }
        else
        {
            var_node = first;
            new_node = (node *)malloc(sizeof(node));
            (*new_node).data = number;
            (*new_node).next = NULL;
            while ((*var_node).next != NULL)
            {
                var_node = (*var_node).next;
            }
            (*var_node).next = new_node;
        }
        printf("\nEnter the data");
        scanf("%d", &number);
    }
    return (first);
}

node *display_hll(node *first)
{
    node *var_node;
    var_node = (*first).next;
    while (var_node != NULL)
    {
        printf("\n%d", (*var_node).data);
        var_node = (*var_node).next;
    }

    return (first);
}