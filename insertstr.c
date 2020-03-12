/*
D:\C\insertstr.c
Avinal Kumar
December 15, 2018
Inserting Substrings in string
*/

#include<stdio.h>
#include<string.h>
int main()
{
    char mainstr[30], instr[10], newstr[40];
    printf("Enter main string.\n");
    gets(mainstr);
    printf("Enter string to insert.\n");
    gets(instr);
    int pos;
    printf("Enter position to insert the string.\n");
    scanf("%d", &pos);
    int i=0,j=0, k=0;
    while(mainstr[i]!='\0')
    {
        if(i==pos)
        {
            while(instr[k]!='\0')
            {
                newstr[j]=instr[k];
                j++;
                k++;
            }
        }
        else
        {
            newstr[j]=mainstr[i];
            j++;
        }
        i++;
    }
    newstr[j]='\0';
    printf("The new string is : \n");
    puts(newstr);
    return 0;
}