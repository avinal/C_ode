#include<stdio.h>
#include<string.h>
int main()
{
    int l1,l2, i, j, t, k,p=0;
    char s1[1000], s2[1000];
    scanf("%d", &t);
    for(k=1; k<=t; k++)
    {
        scanf("%s%s", s1, s2);
        l1=strlen(s1);
        l2=strlen(s2);
        for(i=0; i<=l1; i++)
        {
            for(j=0; j<=l2; j++)
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
        for(i=0; i<=l1; i++)
        {
            if(s1[i]!='\0')
            {
                p++;
            }
        }
        for(j=0; j<=l1; j++)
        {
            if(s2[j]!='\0')
            {
                p++;
            }
        }
        printf("%d", p);
    }
    return 0;
}