#include <stdio.h>
#include <malloc.h>
#include <string.h>
struct ponistack
{
    char roll[11];
    struct ponistack *next;
};
typedef struct ponistack node;
node *push(node *, char *);
node *pop(node *);
node *leave();
int peek(node *);
int main(int argc, char const *argv[])
{
    int test;
    scanf("%d", &test);
    while (test--)
    {
        int student, classes, repeat = 0;
        scanf("%d%d", &student, &classes);
        node *top[classes];

        for (int i = 0; i < classes; i++)
        {
            top[i] = NULL;
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
        node *mini_node,*temp;
        int value=0,k;
        while(classes)
        {
            mini_node=top[0];
            for(k=1; k<classes ; k++)
            {
                if(strcmp(mini_node->roll,top[k]->roll)>0)
                {
                    mini_node=top[k];
                }
            }
            value=peek(mini_node);
            if(value==-1)
            {
                classes--;
                for(int l=k; l<classes; l++)
                {
                    top[k]=top[k+1];
                }
            }
            mini_node=pop(mini_node);
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


