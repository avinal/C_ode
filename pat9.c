#include<stdio.h>
int main()
{
    int i,j,terms;
    scanf("%d",&terms);
    for(i=1;i<=terms;i++)
    { 
        if(i==2)
        {
            continue;
        }
        for(j=1;j<=i;j++)
        {
            if(j%2==0)
            {
                printf("* ");
            }
            else
            {
                printf("%d ", j);
            }
        }
        printf("\n");
    }
}