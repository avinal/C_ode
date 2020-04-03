#include<stdio.h>
int main()
{
    int i,j, terms;
    scanf("%d", &terms);
    for(i=1; i<=terms; i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
}