#include<stdio.h>
int main()
{
    int i,j,terms;
    scanf("%d",&terms);
    for(i=1;i<=terms;i++)
    {
        if(i%2==0)
        {
            for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        }
        else
        {
            for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        }
        printf("\n");
    }
    system("pause");
    return 0;
}