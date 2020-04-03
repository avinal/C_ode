#include <stdio.h>
#include <malloc.h>
struct ponistacksort
{
    int data;
    struct ponistacksort *next;
};
typedef struct ponistacksort node;
node *top1 = NULL, *top2 = NULL;
node *push(node *, int);
node *pop(node *);
int peek(node *);
int main(int argc, char const *argv[])
{
    int test;
    scanf("%d", &test);
    while (test--)
    {
        int data;
        top1 = push(top1, data);
    }

    return 0;
}

node *push(node *first, int data)
{
    node *new_node;
    new_node = (node *)malloc(sizeof(node));
    new_node->data = data;
    if (first == NULL)
    {
        new_node->next = NULL;
        first = new_node;
    }
    else
    {
        new_node->next = first;
        first = new_node;
    }
    return (first);
}

node *pop(node *first)
{
    node *var_node;
    var_node = first;
    first = first->next;
    free(var_node);
    return (first);
}

int peek(node *first)
{
    if (first->next == NULL)
    {
        printf("%d\n", first->data);
        return (-1);
    }
    else
    {
        printf("%d\n", first->data);
        return (0);
    }
}