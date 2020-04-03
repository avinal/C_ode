#include <stdio.h>
#include <string.h>
int main()
{
    char str[10][10], mastr[100];
    printf("Enter the sentence.");
    fgets(mastr, 99, stdin);
    int i = 0, j = 0, k = 0, length = strlen(mastr);
    printf("%d", length);

    for (i = 0;i<length; i++)
    {
        if (mastr[i] != ' ')
        {
            str[j][k] = mastr[i];
            k++;
        }
        else
        {
            k = 0;
            j++;
        }
    }
    printf("%c", mastr[0]);

    for (int i = j - 1; i >= 0; i++)
    {
        printf("%s ", str[i]);
    }

    return 0;
}