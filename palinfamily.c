#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int ifPalindrome(char *);
int main()
{
    int test, length;
    scanf("%d", &test);
    char string[10000], even_string[10000], odd_string[10000];
    fgets(string,10000,stdin);
    length = strlen(string);
    int j = 0, k = 0;
    for (int i = 0; i < length-1; i++)
    {
        if (i % 2 == 0)
        {
            odd_string[j] = string[i];
            j++;
        }
        else
        {
            even_string[k] = string[i];
            k++;
        }
    }
    int pal_pa, pal_ev, pal_od;
    pal_pa = ifPalindrome(string);
    pal_ev = ifPalindrome(even_string);
    pal_od = ifPalindrome(odd_string);
    if (pal_pa == 1)
    {
        printf("\nPARENT");
    }
    else if (pal_ev == 1 && pal_od == 1)
    {
        printf("\nTWIN");
    }
    else if (pal_ev == 1 && pal_od == 0)
    {
        printf("\nEVEN");
    }
    else if (pal_od == 1 && pal_ev == 0)
    {
        printf("\nODD");
    }
    else
    {
        printf("\nALIEN");
    }
    return 0;
}
int ifPalindrome(char check[10000])
{
    int length = strlen(check);
    for (int n = 0; n < length ; ++n)
    {
        if (check[n] == check[length - n - 1])
        {
            continue;
        }
        else
        {
            return 0;
            exit(0);
        }
    }
    return (1);
}