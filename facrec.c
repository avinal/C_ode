#include<stdio.h>
#include<math.h>
int fac(int );
int main()
{
    int num, rec ;
    printf("Enter any number .");
    scanf("%d", &num);
    rec=fac(num);
    printf("%d\n", rec);
}
int fac(int x)
{
    int f;
    if(x==1)
    {
        return(1);
    }
    else
    {
        f=x*fac(x-1);
        return(f);
    }
}