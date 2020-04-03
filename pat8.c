#include<stdio.h>
int main()
{
    int i,j,k=1,terms;
    scanf("%d", &terms);
    for(i=1; i<=terms; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d ",k);
            k++;
        }
        printf("\n");
    }
}