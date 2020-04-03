#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int stack[MAX], top = -1;
int push(int *, int);
int pop(int *);
int peek(int *);
int display(int *);

int main(int argc, char const *argv[])
{
    int value, option;
    do
    {
        printf("\n****stack****");
        printf("\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Peek");
        printf("\n4. Display");
        printf("\n5. EXIT");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            printf("\nEnter the number to be pushed on stack :");
            scanf("%d", &value);
            push(stack, value);
            break;
        case 2:
            value = pop(stack);
            if (value != -1)
            {
                printf("\nThe value deleted from stack is %d.", value);
            }
            break;
        case 3:
            value = peek(stack);
            if (value != -1)
            {
                printf("\nThe value on the top of the stack is %d.", value);
            }
            break;
        case 4:
            display(stack);
            break;

        default:
            break;
        }
    } while (option != 5);
    return 0;
}

int push(int stack[], int value)
{
    if (top == MAX - 1)
    {
        printf("\nStack Overflow");
    }
    else
    {
        top++;
        stack[top] = value;
    }
    return 0;
}

int pop(int stack[])
{
    int val;
    if (top == -1)
    {
        printf("\nStack Underflow");
        return -1;
    }
    else
    {
        val = stack[top];
        top--;
        return val;
    }
}

int peek(int stack[])
{
    if (top == -1)
    {
        printf("\nStack is empty");
        return -1;
    }
    else
    {
        return (stack[top]);
    }
}

int display(int stack[])
{
    if (top == -1)
    {
        printf("\nStack is empty");
    }
    else
    {
        for (int i = top; i >= 0; i--)
        {
            printf("\n%d", stack[i]);
        }
    }
    return 0;
}
