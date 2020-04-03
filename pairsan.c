#include<stdio.h>
int main()
{
    int color[10], i, j, k, p=0, term;
    scanf("%d", &term);
    i=0;
    for(i=0; i<term; i++)
    {
        scanf("%d",&color[i]);
    }
    for(j=0; j<term; j++)
    {
        for(k=0; k<term; k++)
        {
            if(color[j]==0)
            {
                break;
            }
            else if(color[j]==color[k] && j!=k)
            {
                p++;
                color[j]=0;
                color[k]=0;
                break;
            }
        }
    }
    printf("%d", p);
    return 0;
}