#include <stdio.h>
#include <string.h>
int main()
{
    char str[30], patstr[10];
    printf("Enter the main string.\n");
    gets(str);
    printf("Enter pattern .\n");
    gets(patstr);
    unsigned int check = strlen(str) - strlen(patstr) + 1, pos = 0, i = 0, j = 0;

    while (j < strlen(patstr) && i != check)
    {
        if (str[i] == patstr[j])
        {
            i++;
            j++;
            pos++;
            check++;
        }
        else
        {
            i++;
            pos = 0;
            j = 0;
        }
    }
    if (pos == strlen(patstr))
    {
        printf("The postion of pattern match is %d", i - pos);
    }
    else
    {
        printf("The given pattern is not found in the string.");
    }
    return 0;
}