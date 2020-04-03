#include<stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    int p[n];
    for(i=0; i<=n; i++)
    {
        scanf("%d", &p[i]);
    }
    for(i=0; i<n; i++)
    {
        if(p[i]<p[i+1])
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}