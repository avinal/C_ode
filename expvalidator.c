/*
D:\C\expvalidator.c
Avinal Kumar
January 25, 2019
Bracket matching Program using stack
*/
#include <stdio.h>
#include <string.h>
#define MAX 20
int top = -1;
int stack[MAX];
int push(char);
char pop();
int main(int argc, char const *argv[])
{
    char expression[MAX], temp;
    int flag = 1;
    printf("Enter an expression :\n");
    fgets(expression, 20, stdin);
    for (int i = 0; i < strlen(expression); i++)
    {
        if (expression[i] == '(' || expression[i] == '{' || expression[i] == '[')
        {
            push(expression[i]);
        }
        if (expression[i] == ')' || expression[i] == '}' || expression[i] == ']')
        {
            if (top == -1)
            {
                flag = 0;
            }
            else
            {
                temp = pop();
                if (expression[i] == ')' && (temp == '{' || temp == '['))
                {
                    flag = 0;
                }
                if (expression[i] == '}' && (temp == '(' || temp == '['))
                {
                    flag = 0;
                }
                if (expression[i] == '[' && (temp == '{' || temp == '('))
                {
                    flag = 0;
                }
            }
        }
    }
    if (top >= 0)
    {
        flag = 0;
    }
    if (flag == 1)
    {
        printf("Valid Expression\n");
    }
    else
    {
        printf("Not a valid Expression\n");
    }

    return 0;
}
char pop()
{
    if (top == -1)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        return (stack[top--]);
    }
}

int push(char var)
{
    if (top == (MAX - 1))
    {
        printf("Stack Overflow\n");
    }
    else
    {
        top++;
        stack[top] = var;
        return 0;
    }
}
