#include<stdio.h>
#include<string.h>
int main()
{
    char str[10];
    printf("Enter a string to reverse.\n");
    scanf("%s", str);
    char revstr[strlen(str)];
    for(unsigned int i=0; i<=strlen(str); i++)
    {
        revstr[i]=str[strlen(str)-i-1];
    }
    printf("Reversed string is '%s'.\n", revstr);
    return 0;
}