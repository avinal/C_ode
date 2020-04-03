#include<stdio.h>
#include<stdlib.h>
int swaper(int *x,int *y );
int main()
{
    int a, b;
    printf("enter two numbers");
    scanf("%d%d", &a, &b);
    swaper(&a,&b);
    printf("%d %d", a,b);
    return 0;
}
int swaper(int *x, int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;

}