#include <stdio.h>
#include <string.h>
int main()
{
    char *ptrs, *ptrsc, str[50], strcp[50];
    printf("\nEnter a string .");
    fgets(str, 50, stdin);
    ptrs=str;
    ptrsc=strcp;
    while(*ptrs!='\0')
    {
        *ptrsc=*ptrs;
        ptrs++;
        ptrsc++;
    }
    printf("\nThe copied string is : ");
    puts(strcp);
    return 0;
}