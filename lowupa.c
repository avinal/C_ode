#include<stdio.h>
#include<string.h>
int main()
{
    char up[100];
    int l, i;
    scanf("%s", up);
    l= strlen(up);
    for(i=0; i<=l; i++)
    {
        if(up[i]>=65 && up[i]<=90)
        {
            up[i]=up[i]+32;
        }
        else if(up[i]>=97 && up[i]<=122)
        {
            up[i]=up[i]-32;
        }
    }
    printf("%s", up);
}
