#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char a[10], b[10], c[2];
    printf("Enter two character.");
    scanf("%s%s", a,b);
    strcat(a,b);
    printf("first string is %s\n", a);
    strcat(b,a);
    printf("second string is %s\n", b);
    return 0;

}