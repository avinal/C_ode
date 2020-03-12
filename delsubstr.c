/*
D:\C\delsubstr.c
Avinal Kumar
December 15, 2018
Finds and Deletes a substring in a given string
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[30], delstr[10], newstr[30];
    printf("Enter the main string.\n");
    gets(str);
    printf("Enter pattern to delete.\n");
    gets(delstr);
    unsigned int check = strlen(str) - strlen(delstr) + 1, pos = 0, i = 0, j = 0, k = 0;

    while (j < strlen(delstr) && i != check)
    {
        if (str[i] == delstr[j])
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
    if (pos == strlen(delstr))
    {
        while (str[k] != '\0')
        {
            if (k < i - pos)
            {
                newstr[k] = str[k];
                k++;
            }
            else
            {
                newstr[k] = str[k + strlen(delstr)];
                k++;
            }
        }
        printf("The new string is :\n");
        puts(newstr);
    }
    else
    {
        printf("The pattern is not found in the given string.\n");
    }
    return 0;
}
