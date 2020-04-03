#include <stdio.h>
#include <string.h>
int main()
{
    char message[10000];
    int cipher, length, change;
    scanf("%s%d", message, &cipher);
    length = strlen(message);
    for (int i = 0; i < length; i++)
    {
        if (message[i] >= 65 && message[i] <= 90)
        {
            change = cipher % 26;
            if ((message[i] + change) <= 90)
            {
                message[i] += change;
            }
            else
            {
                message[i] -= (26 - change);
            }
        }
        if (message[i] >= 97 && message[i] <= 122)
        {
            change = cipher % 26;
            if ((message[i] + change) <= 122)
            {
                message[i] += change;
            }
            else
            {
                message[i] -= (26 - change);
            }
        }
        if (message[i] >= 48 && message[i] <= 57)
        {
            change=cipher%10;
            if ((message[i] + change) <= 57)
            {
                message[i] += change;
            }
            else
            {
                message[i] -= (10 - change);
            }
        }
    }
    printf("%s\n", message);
    return 0;
}