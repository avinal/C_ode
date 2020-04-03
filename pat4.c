#include<stdio.h>
int main()
{
 int i,j,k,l, term;
    scanf("%d", &term);
    for(i=term; i>0; i--)
    {
        for(j=1; j<i; j++)
        {
            printf("* ");
        }
        for(k=1; k<=term-j+1; k++)
        {
            printf("%d ",k);
        }
        for(l=k-2; l>0; l--)
        {
            printf("%d ",l);
        }
        printf("\n");
    }
}