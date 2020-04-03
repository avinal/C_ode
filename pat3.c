#include<stdio.h>
int main()
{
    int i,j,k, term;
    scanf("%d", &term);
    for(i=term; i>0; i--)
    {
        for(j=1; j<term-i+1; j++)
        {
            printf("* ");
        }
        for(k=i; k>0; k--)
        {
            printf("%d ",k);
        }
        printf("\n");
    }
}