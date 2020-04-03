#include<stdio.h>
int fib(int n)
{
    if(n>=3)
    {
        int a=fib(n-2)+fib(n-1);
        printf("\n%d",a);
        return(a);
    }
    else
    {
        return(1);
    }
}
int main()
{
    int res=fib(7);
    printf("\n%d",res);
    return 0;
}