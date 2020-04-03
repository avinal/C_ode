#include<stdio.h>
int main()
{
    int a,b;
    char *ptr;
    ptr=&a;
    a=511;
    b=*ptr;
    printf("\n%d%d%d", a,b,*ptr);
    *ptr=10;
    printf("\n%d%d%d",a,b,*ptr);
return(0);
}