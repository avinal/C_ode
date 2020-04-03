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
        for(k=term; k>j-1; k--)
        {
            printf("%d ",k);
        }
        for(l=k+2; l<=term; l++)
        {
            printf("%d ",l);
        }
        printf("\n");
    }
    for(i=term; i>1;i--)
    {
        for(j=1; j<term-i+2; j++)
        {
            printf("* ");
        }
        for(k=term; k>j-1; k--)
        {
            printf("%d ",k);
        }
        for(l=k+2; l<=term; l++)
        {
            printf("%d ",l);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}