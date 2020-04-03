#include<stdio.h>
int main()
{
    int i,j,k, term;
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
        printf("\n");
    }
    system("pause");
    return 0;
}