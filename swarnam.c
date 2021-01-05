#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;

} Node;

int size = 0;

Node *new_node(int i)
{
    Node *temp = (Node *)malloc(sizeof(Node));
    temp->data = i;
    temp->next = NULL;
    return temp;
}
Node *start = NULL;

void insert(int key)
{
    Node *temp = new_node(key);
    if (start == NULL)
    {
        start = temp;
    }
    else
    {
        if (start->data > key)
        {
            temp->next = start->next;
            start = temp;
        }
        else
        {
            Node *ptr = start;
            Node *pre = ptr;
            while (key > ptr->data && ptr->next != NULL)
            {
                pre = ptr;
                ptr = ptr->next;
            }
            pre->next = temp;
            temp->next = ptr;
        }
    }
    size++;
}

int getMedian()
{
    Node *ptr = start;
    int get;
    if (size % 2 == 0)
    {
        get = (size / 2) - 1;
    }
    else
    {
        get = (size / 2);
    }
    for (int i = 0; i < get - 1; i++)
    {
        ptr = ptr->next;
    }
    return ptr->data;
}

int deleteMedian()
{
    Node *ptr = start;
    int get;
    if (size % 2 == 0)
    {
        get = (size / 2) - 1;
    }
    else
    {
        get = (size / 2);
    }
    Node *pre = ptr;
    for (int i = 0; i < get - 1; i++)
    {
        pre = ptr;
        ptr = ptr->next;
    }
    int data = ptr->data;
    pre->next = ptr->next;
    size--;
    free(ptr);
    return data;
}

void printContents()
{
    Node *ptr = start;
    while (ptr->next != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}

int main(int argc, char const *argv[])
{
    int test;
    scanf("%d", &test);
    while (test > 0)
    {
        int option;
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            int input;
            scanf("%d", &input);
            insert(input);
            break;
        case 2:
            int get = getMedian();
            printf("%d\n", get);
            break;
        case 3:
            get = deleteMedian();
            printf("%d\n", get);
            break;
        case 4:
            printContents();
            break;
        }
        --test;
    }
    return 0;
}
