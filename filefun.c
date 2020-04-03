#include <stdio.h>
#include "fas.h"
int main()
{
    int num, fact;
    printf("Enter the number.\n");
    scanf("%d", &num);
    fact=factorial(num);
    printf("the factorial is %d.", fact);
    return 0;
}