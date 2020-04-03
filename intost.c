#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i, rem, len = 0, num;
    char str[10];
    printf("Enter a number");
    scanf("%d", &num);
    while(num != 0)
    {
        len++;
        num /= 10;
    }
    for(i = 0; i < len; i++)
    {
        rem = num % 10;
        num = num / 10;
        str[len - (i + 1)] = rem + '0';
    }
    str[len] = '\0';
    printf("The string is %s", str);
    return 0;
}