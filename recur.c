#include<stdio.h>
int abc();
int abc()
{
    int a;
    static int s=3;
    a=++s;
    printf("\n%d%d",a,s);
    if(a<=6)
    {
        abc();
    }
    printf("\n%d%d",a,s);
    return 0;
}
int main()
{
    abc();
    abc();
return (0);
}