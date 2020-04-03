#include<stdio.h>
int main()
{
    int terms ;
    int *ptr;
    printf("Enter a small integer.");
    scanf("%d", &terms);
    ptr=&terms;
    printf("%p", &terms);  

}