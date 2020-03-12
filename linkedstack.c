/*
D:\C\linkedstack.c
Avinal Kumar
December 12, 2018
Linked list implementation of stack
*/

#include <stdlib.h>
#include <stdio.h>
#include <malloc.h>

struct node {
    int data;
    struct node * next;
};
typedef struct node stack;

stack * top = NULL;
stack * push(stack *, int);
stack * pop(stack *);
stack * display(stack *);
int peek(stack *);

int main(int argc, char const * argv[]) {
    int option, value;

    do {
        printf("\n####Linked Stack####");
        printf("\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Peek");
        printf("\n4. Display");
        printf("\n5. EXIT");
        printf("\nEnter your choice : ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                printf("\nEnter the value to be pushed on stack");
                scanf("%d", &value);
                top = push(top, value);
                break;

            case 2:
                top = pop(top);
                break;

            case 3:
                value = peek(top);

                if (value == -1) {
                    printf("\nThe stack is empty");
                }
                else {
                    printf("\nThe value at the top of stack is %d .", value);
                }

                break;

            case 4:
                printf("\nThe stack is :");
                display(top);
                break;

            default:
                break;
        }
    } while (option != 5);

    return 0;
}

stack * push(stack * first, int value) {
    stack * new_node;
    new_node = (stack *)malloc(sizeof(stack));
    (*new_node).data = value;

    if (first == NULL) { //If there is no element in stack
        (*new_node).next = NULL;
        first = new_node;
    }
    else {
        (*new_node).next = first;
        first = new_node;
    }

    return (first);
}

stack * pop(stack * first) {
    stack * var_node;
    var_node = first;

    if (first == NULL) { //In case stack is empty
        printf("\nStack Underflow");
    }
    else {
        first = (*first).next;
        printf("\nThe value being deleted is %d .", (*var_node).data);
        free(var_node);
    }

    return (first);
}

int peek(stack * first) {
    if (first == NULL) {
        return -1;
    }
    else {
        return ((*first).data);
    }
}

stack * display(stack * first) {
    stack * var_node;
    var_node = first;

    if (first == NULL) {
        printf("\nThe stack is empty");
    }
    else {
        while (var_node != NULL) {
            printf("\n%d", (*var_node).data);
            var_node = (*var_node).next;
        }
    }

    return (first);
}
