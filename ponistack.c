#include <stdio.h>
#include <malloc.h>
#include <string.h>
struct ponistack
{
    char roll[10];
    struct ponistack *next;
};
typedef struct ponistack node;
node *push(node *, char *);
node *pop(node *);
node *copystack(node *, node *);

int peek(node *);
int main(int argc, char const *argv[])
{
    int test;
    scanf("%d", &test);
    while (test--)
    {
        int student, classes, repeat = 0;
        scanf("%d%d", &student, &classes);
        node *top[classes], *copy_top[classes];

        for (int i = 0; i < classes; i++)
        {
            top[i] = NULL;
            copy_top[i] = NULL;
        }
        char roll[10];
        while (student--)
        {
            scanf("%s", roll);
            top[repeat] = push(top[repeat], roll);
            repeat++;
            if (repeat == classes)
            {
                repeat = 0;
            }
        }

        for (int j = 0; j < classes; j++)
        {
            copy_top[j] = copystack(copy_top[j], top[j]);
            int value = 0;
            while (value != -1)
            {
                value = peek(copy_top[j]);
                copy_top[j] = pop(copy_top[j]);
            }
        }
    }
    return 0;
}

node *push(node *first, char roll[10])
{
    node *new_node;
    new_node = (node *)malloc(sizeof(node));
    strcpy(new_node->roll, roll);
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
        printf("%s\n", first->roll);
        return (-1);
    }
    else
    {
        printf("%s\n", first->roll);
        return 0;
    }
}

node *copystack(node *first, node *real)
{
    do
    {
        node *new_node;
        new_node = (node *)malloc(sizeof(node));
        strcpy(new_node->roll, real->roll);
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
        real = pop(real);
    } while (real != NULL);
    return (first);
}

