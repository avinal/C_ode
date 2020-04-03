#include<stdio.h>
int main()
{
    int fi, la, di,i, fa=0;
    scanf("%d%d%d", &fi, &la,&di);
    for(i=fi; i<=la; i++)
    {
        if(i%di==0)
        {
            fa++;
        }
    }
    printf("%d", fa);
}