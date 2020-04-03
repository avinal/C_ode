#include<stdio.h>
int main()
{
    int i,j,k,l,term;
    scanf("%d", &term);
    for(i=1; i<=term; i++)
    {
        for(j=1;j<=i; j++ )
        {
            printf("%d ", j);
        }
        l=2*(term-i+1)-2;
        for(k=l; k>1; k--)
        {
            printf("* ");
        }
        if(j!=term+1)
        {
            do{
            j--;
            printf("%d ",j);
        }while(j>1);
        }
        else{
           do{
            j--;
            printf("%d ",j-1);
        }while(j>2); 
        }
        printf("\n");
    }
}