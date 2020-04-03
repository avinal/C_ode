#include<stdio.h>
int main()
{
    int x=47, y=7;
    x=x^y;
    y=x^y;
    x=x^y;
    printf("%d %d", x,y);
    return 0;
}