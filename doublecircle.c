/*
D:\C\doublecircle.c
Avinal Kumar
December 22, 2018
Doubly Circular Linked List implementation
*/

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
struct doublecircle
{
    struct doublecircle *prev;
    int data;
    struct doublecircle *next;
};
typedef struct doublecircle node;
node *start = NULL;
node *create_dc(node *);
node *display_dc(node *);
node *delete_beg(node *);
node *delete_end(node *);
node *add_beg(node *);
node *add_end(node *);
node *delete_node(node *);
node *delete_all(node *);

int main()
{
    int choice;
    do
    {
        printf("\n******Double Circular Linked List Operations******");
        printf("\n1. Create a Circular Linked list");
        printf("\n2. Display a Circular linked list");
        printf("\n3. Insert a node at the beginning");
        printf("\n4. Insert a node at the end");
        printf("\n5. Delete a node in the beginning");
        printf("\n6. Delete a node in the end");
        printf("\n7. Delete a given node");
        printf("\n8. Delete the Double Circular linked list");
        printf("\n9. EXIT");
        printf("\nEnter your Choice");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            start = create_dc(start);
            printf("\nThe list has been created");
            break;
        case 2:
            start = display_dc(start);
            break;
        case 3:
            start = add_beg(start);
            printf("\nUpdated list is :\n");
            display_dc(start);
            break;
        case 4:
            start = add_end(start);
            printf("\nUpdated list is :\n");
            display_dc(start);
            break;
        case 5:
            start = delete_beg(start);
            printf("\nUpdated list is :\n");
            display_dc(start);
            break;
        case 6:
            start = delete_end(start);
            printf("\nUpdated list is :\n");
            display_dc(start);
            break;
        case 7:
            start = delete_node(start);
            printf("\nUpdated list is :\n");
            display_dc(start);
            break;
        case 8:
            start = delete_all(start);
            break;
        default:
            printf("\nWrong Choice !!!");
            break;
        }
    } while (choice != 9);
    return 0;
}

node *create_dc(node *first)
{
    node *new_node, *var_node;
    int number;
    printf("\nEnter -1 to end");
    printf("\nEnter the data");
    scanf("%d", &number);
    while (number != -1)
    {
        if (first == NULL)
        {
            new_node = (node *)malloc(sizeof(node));
            (*new_node).data = number;
            (*new_node).prev = NULL;
            first = new_node;
            (*new_node).next = first;
        }
        else
        {
            new_node = (node *)malloc(sizeof(node));
            (*new_node).data = number;
            var_node = first;
            while ((*var_node).next != first)
            {
                var_node = (*var_node).next;
            }
            (*new_node).prev = var_node;
            (*var_node).next = new_node;
            (*new_node).next = first;
            (*first).prev = new_node;
        }
        printf("\nEnter the data");
        scanf("%d", &number);
    }
    return (first);
}

node *display_dc(node *first)
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
    node *new_node, *var_node;
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
    (*new_node).prev = var_node;
    (*var_node).next = new_node;
    (*first).prev = new_node;
    (*new_node).next = first;
    first = new_node;
    return (first);
}

node *add_end(node *first)
{
    node *new_node, *var_node;
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
    (*new_node).prev = var_node;
    (*var_node).next = new_node;
    (*new_node).next = first;
    (*first).prev = new_node;
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
    (*first).next->prev = var_node;
    (*var_node).next = (*first).next;
    free(first);
    first = (*var_node).next;
    return (first);
}

node *delete_end(node *first)
{
    node *var_node;
    var_node = first;
    while ((*var_node).next != first)
    {
        var_node = (*var_node).next;
    }
    (*var_node).prev->next = first;
    (*first).prev = (*var_node).prev;
    free(var_node);
    return (first);
}

node *delete_all(node *first)
{
    while ((*first).next != first)
    {
        first = delete_beg(first);
    }
    free(first);
    return (first);
}

node *delete_node(node *first)
{
    node *var_node;
    int value;
    printf("\nEnter the node to be deleted");
    scanf("%d", &value);
    var_node = first;
    if ((*var_node).data == value)
    {
        first = delete_beg(first);
    }
    else
    {
        while ((*var_node).data != value)
        {
            var_node = (*var_node).next;
        }
        (*var_node).prev->next = (*var_node).next;
        (*var_node).next->prev = (*var_node).prev;
        free(var_node);
    }
    return (first);
}
