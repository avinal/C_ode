#include<stdio.h>
int factor(int number);
int main()
{
    int  i, number;
    printf("Enter any number.\n");
    scanf("%d", &number);
    factor(number);
}
int factor(int number)
{
    int fac[50], i, j=0, num;
    i=2;
    num=number;
    while(i<=number)
    {
        if(number%i==0)
        {
            fac[j]=i;
            number=number/i;
            j++;
        }
        else
        {
            i++;
            continue;
        }
    }
    if(j==1)
    {
        printf("The number %d is only prime factor.\n", num);
    }
    else
    {
        printf("%d = ", num);
        i=0;
        while(i<j-1)
        {
            printf("%dx",fac[i]);
            i++;
        }
        printf("%d\n", fac[j-1]);
    }
}