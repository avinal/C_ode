#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int l1,l2, i, j, t, k;
    char s1[1000], s2[1000];
    scanf("%d", &t);
    for(k=1; k<=t; k++)
    {
        scanf("%s%s", s1, s2);
        for(l1=1; s1[l1]!='\0'; l1++);
        for(l2=1; s2[l2]!='\0'; l2++);
        if(l1!=l2)
        {
            printf("NO\n");
            exit(0);
        }
        for(i=0; i<=l1; i++)
        {
            for(j=0; j<=l1; j++)
            {
                if(s1[i]==s2[j])
                {
                    s1[i]='\0';
                    s2[j]='\0';
                }
                else
                {
                continue;
                }
            }
        }
        if(strlen(s1)==0 && strlen(s2)==0)
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