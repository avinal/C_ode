#include <stdio.h>
#include <stdlib.h>
int main()
{
    char first[20], second[20];
    int lenf, lens;
    printf("Enter first string.\n");
    scanf("%s", first);
    printf("Enter second string.\n");
    scanf("%s", second);
    for (lenf = 0; first[lenf] != '\0'; ++lenf)
        ;
    lens = 0;
    while (second[lens] != '\0')
    {
        first[lenf] = second[lens];
        lenf++;
        lens++;
    }
    first[lenf] = '\0';
    printf("The combined string is %s\n", first);
    return 0;
}