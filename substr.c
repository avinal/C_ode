#include<stdio.h>
#include<string.h>
int main()
{
    char str[30];
    int pos, num;
    printf("Enter the string.\n");
    gets(str);
    printf("Enter the postion of substring to start with.\n");
    scanf("%d", &pos);
    printf("Enter the length of the substring.\n");
    scanf("%d", &num);
    char substr[num];
    int j=0;
    while(str[pos]!='\0' && num>0)
    {
        substr[j]=str[pos];
        pos++;
        num--;
        j++;
    }
    printf("%s\n", substr);
}