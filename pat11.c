#include<stdio.h>
int main()
{
    int i,j,terms,re;
    scanf("%d",&terms);
    for(i=1; i<=terms; i++)
    {
        re=i;
        for(j=1; j<=i; j++)
        {
            printf("%d ", re);
            re=re+terms-j;
        }
        printf("\n");
    }
    system("pause");
    return 0;
}