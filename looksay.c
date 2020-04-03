#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char combine(char str1[50], char str2[50]);
int main()
{
    char start[50], digit[10]='0123456789', refer[10]='0000000000';
    int i, terms,length, comp;
    printf("Enter initial number.");
    scanf("%s", start);
    printf("Enter number of terms.");
    scanf("%d",&terms);
    for(length=0; start[length]!='\0'; ++length);
    for(i=0 ; i<=length; i++ )
    {
        comp=0;
        do
        {
            if(start[i]==digit[comp])
            {
                refer[comp]+=1;
            }
            else
            {
                if(start[i]==start[i-1])
                {
                    refer[comp]+=1;
                }
            }
        }
        while(comp<10);
    }

    return 0;
}

char combine(char str1[50], char str2[50])
{
    int len1, len2;
    
    for(len1=0; str1[len1]!='\0'; ++len1);
    len2=0;
    while(str2[len2]!='\0')
    {
        str1[len1]=str2[len2];
        len1++;
        len2++;
    }
    str1[len1]='\0';
    return(str1);
}