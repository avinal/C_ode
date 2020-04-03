#include <stdio.h>
#include <malloc.h>
struct hkrerthlink
{
    int data;
    struct hkrerthlink *next;
};
typedef struct hkrerthlink node;
node *start = NULL;
node *create_ll(node *);
node *display(node *);
node *sort_ll(node *);

int main(int argc, char const *argv[])
{
    int test;
    scanf("%d", &test);
    while (test--)
    {
        start = create_ll(start);
        start = sort_ll(start);
        display(start);
    }
    return 0;
}
node *create_ll(node *first)
{
    node *new_node, *var_node;
    int value, elements;
    scanf("%d", &elements);
    
    while (elements>0)
    {
        scanf("%d", &value);
        new_node = (node *)malloc(sizeof(node));
        (*new_node).data = value;
        if (first == NULL)
        {
            (*new_node).next = NULL;
            first = new_node;
        }
        else
        {
            var_node = first;
            while ((*var_node).next != NULL)
            {
                var_node = (*var_node).next;
            }
            (*var_node).next = new_node;
            (*new_node).next = NULL;
        }
        
        elements--;
    }
    return (first);
}

node *display(node *first)
{
    node *var_node;
    var_node = first;
    while (var_node != NULL)
    {
        printf("%d ", (*var_node).data);
        var_node=(*var_node).next;
    }
    return (first);
}

node *sort_ll(node *first)
{
    node *pre_node, *post_node;
    int temp;
    pre_node = first;
    while (pre_node != NULL)
    {
        post_node = (*pre_node).next;
        while (post_node != NULL)
        {
            if ((*pre_node).data < (*post_node).data)
            {
                temp = (*post_node).data;
                (*post_node).data = (*pre_node).data;
                (*pre_node).data = temp;
            }
            post_node = (*post_node).next;
        }
        pre_node = (*pre_node).next;
    }
    return (first);
}
