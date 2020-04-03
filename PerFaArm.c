#include<stdio.h>
#include<math.h>
int armstrong(int);
int factorial(int);
int perfect(int);
int main()
{
    int number;
    printf("Enter a number.");
    scanf("%d", &number);
    armstrong(number);
    factorial(number);
    perfect(number);
    return 0;
}
int armstrong(int n)
{
    int i, arm, rem;
    i=n;
    do
    {
        rem=n%10;
        arm=arm+pow(rem,3);
        n/=10;
    }
    while(n!=0);
    if(arm==i)
    {
        printf("It is an Armstrong number.\n");
    }
    else
    {
        printf("Not an Armstrong number.\n");
    }
}
int factorial(int n)
{
    int i=1;
    while(n!=0)
    {
        i*=n;
        n--;
    }
    printf("%d\n", i);
}
int perfect(int n)
{
    int fac[50], j=0, i;
    i=2;
    while(i<=n)
    {
        if(n%i==0)
        {
            fac[j]=i;
            n=n/i;
            j++;
        }
        else
        {
            i++;
            continue;
        }
    }
    for(i=0; i<=j; i++)
    {
        
    }
}