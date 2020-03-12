/*
D:\C\crculatlnklst.c
Avinal Kumar
December 21, 2018
Circular Linked List Implementation 
*/

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct circularnode
{
    int data;
    struct circularnode *next;
};
typedef struct circularnode node;
node *start = NULL;
node *create_cll(node *);
node *display_cll(node *);
node *delete_beg(node *);
node *delete_end(node *);
node *add_beg(node *);
node *add_end(node *);
node *delete_aftr(node *);
node *delete_all(node *);

int main()
{
    int choice;
    do
    {
        printf("\n******Circular Linked List Operations******");
        printf("\n1. Create a Circular Linked list");
        printf("\n2. Display a Circular linked list");
        printf("\n3. Insert a node at the beginning");
        printf("\n4. Insert a node at the end");
        printf("\n5. Delete a node in the beginning");
        printf("\n6. Delete a node in the end");
        printf("\n7. Delete a node after a given node");
        printf("\n8. Delete the Circular linked list");
        printf("\n9. EXIT");
        printf("\nEnter your Choice");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            start = create_cll(start);
            printf("\nThe list has been created");
            break;
        case 2:
            start = display_cll(start);
            break;
        case 3:
            start = add_beg(start);
            printf("\nUpdated list is :\n");
            display_cll(start);
            break;
        case 4:
            start = add_end(start);
            printf("\nUpdated list is :\n");
            display_cll(start);
            break;
        case 5:
            start = delete_beg(start);
            printf("\nUpdated list is :\n");
            display_cll(start);
            break;
        case 6:
            start = delete_end(start);
            printf("\nUpdated list is :\n");
            display_cll(start);
            break;
        case 7:
            start = delete_aftr(start);
            printf("\nUpdated list is :\n");
            display_cll(start);
            break;
        case 8:
            start = delete_all(start);
            break;
        default:
            printf("\nWrong Choice !!!");
            break;
        }
    } while (choice != 9);
}

node *create_cll(node *first)
{
    node *var_node, *new_node;
    int number;
    printf("\nEnter -1 to end");
    printf("\nEnter the data");
    scanf("%d", &number);
    while (number != -1)
    {
        new_node = (node *)malloc(sizeof(node));
        (*new_node).data = number;
        if (first == NULL)
        {
            (*new_node).next = new_node;
            first = new_node;
        }
        else
        {
            var_node = first;
            while ((*var_node).next != first)
            {
                var_node = (*var_node).next;
            }
            (*var_node).next = new_node;
            (*new_node).next = first;
        }
        printf("\nEnter the data");
        scanf("%d", &number);
    }
    return (first);
}

node *display_cll(node *first)
{
    node *var_node;
    var_node = first;
    while ((*var_node).next != first)
    {
        printf("\n%d", (*var_node).data);
        var_node = (*var_node).next;
    }
    printf("\n%d", (*var_node).data);
    return (first);
}

node *add_beg(node *first)
{
    node *var_node, *new_node;
    int number;
    printf("\nEnter the data to be inserted");
    scanf("%d", &number);
    new_node = (node *)malloc(sizeof(node));
    (*new_node).data = number;
    var_node = first;
    while ((*var_node).next != first)
    {
        var_node = (*var_node).next;
    }
    (*var_node).next = new_node;
    (*new_node).next = first;
    first = new_node;
    return (first);
}

node *add_end(node *first)
{
    node *var_node, *new_node;
    int number;
    printf("\nEnter the data to be inserted");
    scanf("%d", &number);
    new_node = (node *)malloc(sizeof(node));
    (*new_node).data = number;
    var_node = first;
    while ((*var_node).next != first)
    {
        var_node = (*var_node).next;
    }
    (*var_node).next = new_node;
    (*new_node).next = first;
    return (first);
}

node *delete_beg(node *first)
{
    node *var_node;
    var_node = first;
    while ((*var_node).next != first)
    {
        var_node = (*var_node).next;
    }
    (*var_node).next = (*first).next;
    free(first);
    first = (*var_node).next;
    return (first);
}

node *delete_end(node *first)
{
    node *var_node, *pre_node;
    var_node = first;
    while ((*var_node).next != first)
    {
        pre_node = var_node;
        var_node = (*var_node).next;
    }
    (*pre_node).next = (*var_node).next;
    free(var_node);
    return (first);
}

node *delete_aftr(node *first)
{
    node *var_node, *pre_node;
    int value;
    printf("\nEnter value after which node is to be deleted");
    scanf("%d", &value);
    var_node = first;
    pre_node = var_node;
    while ((*pre_node).data != value)
    {
        pre_node = var_node;
        var_node = (*var_node).next;
    }
    (*pre_node).next = (*var_node).next;
    free(var_node);
    return (first);
}

node *delete_all(node *first)
{
    node *var_node;
    var_node = first;
    while ((*var_node).next != first)
    {
        first = delete_end(first);
    }
    free(start);
    return start;
}