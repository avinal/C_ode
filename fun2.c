#include<stdio.h>
int printit(float, char);
int main()
{
    float f=12.3;
    char c='C';
    printit(f,c);
}
int printit(float f , char c)
{
    printf("\n%f%c", f,c);
}