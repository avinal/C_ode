/*
D:\C\dbllnklst.c
Avinal Kumar
December 22, 2018
Doubly Linked List Implementation
*/
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct doublenode
{
    struct doublenode *prev;
    int data;
    struct doublenode *next;
};
typedef struct doublenode node;
node *start = NULL;
node *create_dll(node *);
node *display_dll(node *);
node *delete_beg(node *);
node *delete_end(node *);
node *add_beg(node *);
node *add_end(node *);
node *delete_aftr(node *);
node *delete_b4(node *);
node *add_aftr(node *);
node *add_b4(node *);
node *delete_all(node *);

int main()
{
    int choice;
    do
    {
        printf("\n******Linked List Operations******");
        printf("\n1. Create a Linked list");
        printf("\n2. Display a linked list");
        printf("\n3. Insert a node at the beginning");
        printf("\n4. Insert a node at the end");
        printf("\n5. Insert a node before a data");
        printf("\n6. Insert a node after a data");
        printf("\n7. Delete a node in the beginning");
        printf("\n8. Delete a node in the end");
        printf("\n9. Delete node before a given node");
        printf("\n10. Delete node after a given data");
        printf("\n11. Delete the linked list");
        printf("\n12. EXIT\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            start = create_dll(start);
            printf("\nList has been created");
            break;
        case 2:
            start = display_dll(start);
            break;
        case 3:
            start = add_beg(start);
            printf("Updated list is :\n");
            display_dll(start);
            break;
        case 4:
            start = add_end(start);
            printf("Updated list is :\n");
            display_dll(start);
            break;
        case 5:
            start = add_b4(start);
            printf("Updated list is :\n");
            display_dll(start);
            break;
        case 6:
            start = add_aftr(start);
            printf("Updated list is :\n");
            display_dll(start);
            break;
        case 7:
            start = delete_beg(start);
            printf("Updated list is :\n");
            display_dll(start);
            break;
        case 8:
            start = delete_end(start);
            printf("Updated list is :\n");
            display_dll(start);
            break;
        case 9:
            start = delete_b4(start);
            printf("Updated list is :\n");
            display_dll(start);
            break;
        case 10:
            start = delete_aftr(start);
            printf("Updated list is :\n");
            display_dll(start);
            break;
        case 11:
            start = delete_all(start);
            printf("List has been deleted\n");
            break;
        }
    } while (choice != 12);
    return 0;
}

node *create_dll(node *first)
{
    node *var_node, *new_node;
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
            (*new_node).next = NULL;
            first = new_node;
        }
        else
        {
            var_node = first;
            new_node = (node *)malloc(sizeof(node));
            (*new_node).data = number;
            while ((*var_node).next != NULL)
            {
                var_node = (*var_node).next;
            }
            (*var_node).next = new_node;
            (*new_node).prev = var_node;
            (*new_node).next = NULL;
        }
        printf("\nEnter the data");
        scanf("%d", &number);
    }
    return (first);
}

node *display_dll(node *first)
{
    node *var_node;
    var_node = first;
    while (var_node != NULL)
    {
        printf("\n%d", (*var_node).data);
        var_node = (*var_node).next;
    }
    return (first);
}

node *add_beg(node *first)
{
    node *new_node;
    int number;
    printf("\nEnter the data to be inserted");
    scanf("%d", &number);
    new_node = (node *)malloc(sizeof(node));
    (*new_node).data = number;
    (*first).prev = new_node;
    (*new_node).prev = NULL;
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
    (*new_node).next = NULL;
    var_node = first;
    while ((*var_node).next != NULL)
    {
        var_node = (*var_node).next;
    }
    (*var_node).next = new_node;
    (*new_node).prev = var_node;
    return (first);
}

node *add_b4(node *first)
{
    node *new_node, *var_node;
    int value, number;
    printf("\nEnter the data to be inserted");
    scanf("%d", &number);
    printf("\nEnter the value before which data is to be inserted");
    scanf("%d", &value);
    new_node = (node *)malloc(sizeof(node));
    (*new_node).data = number;
    var_node = first;
    while ((*var_node).data != value)
    {
        var_node = (*var_node).next;
    }
    (*new_node).prev = (*var_node).prev;
    (*new_node).next = var_node;
    (*var_node).prev->next = new_node;
    (*var_node).prev = new_node;
    return (first);
}

node *add_aftr(node *first)
{
    node *new_node, *var_node;
    int value, number;
    printf("\nEnter the data to be inserted");
    scanf("%d", &number);
    printf("\nEnter the value after data is to be inserted");
    scanf("%d", &value);
    new_node = (node *)malloc(sizeof(node));
    (*new_node).data = number;
    var_node = first;
    while ((*var_node).data != value)
    {
        var_node = (*var_node).next;
    }
    (*new_node).prev = var_node;
    (*new_node).next = (*var_node).next;
    (*var_node).next->prev = new_node;
    (*var_node).next = new_node;
    return (first);
}

node *delete_beg(node *first)
{
    node *var_node;
    var_node = first;
    first = (*first).next;
    (*first).prev = NULL;
    free(var_node);
    return (first);
}

node *delete_end(node *first)
{
    node *var_node;
    var_node = first;
    while ((*var_node).next != NULL)
    {
        var_node = (*var_node).next;
    }
    (*var_node).prev->next = NULL;
    free(var_node);
    return (first);
}

node *delete_b4(node *first)
{
    node *var_node, *free_node;
    int value;
    printf("\nEnter the value before which data is to be deleted");
    scanf("%d", &value);
    var_node = first;
    free_node = var_node;
    while ((*var_node).data != value)
    {
        free_node = var_node;
        var_node = (*var_node).next;
    }
    if (free_node == first)
    {
        first = delete_beg(first);
    }
    else
    {
        (*free_node).prev->next = var_node;
        (*var_node).prev = (*free_node).prev;
    }
    free(free_node);
    return (first);
}

node *delete_aftr(node *first)
{
    node *var_node, *free_node;
    int value;
    printf("\nEnter the value after which data is to be deleted");
    scanf("%d", &value);
    var_node = first;
    while ((*var_node).data != value)
    {
        var_node = (*var_node).next;
        free_node = (*var_node).next;
    }
    (*var_node).next = (*free_node).next;
    (*free_node).next->prev = var_node;
    free(free_node);
    return (first);
}

node *delete_all(node *first)
{
    while (first != NULL)
    {
        first = delete_beg(first);
    }
    return (first);
}