#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    long int t, two = 0, eth = 0;
    ;
    scanf("%ld", &t);
    do
    {
        char str[100000];
        scanf("%s", str);

    check:
    {
        long int len = strlen(str);
        for (long int i = len - 1; i >= 0; i--)
        {
            if (str[i] == '2')
            {
                two++;
                continue;
            }
            else if (str[i] == '8')
            {
                eth++;
                continue;
            }
            else
            {
                goto twoei;
            }
        }
    }
        if (two == eth)
        {
            printf("%s\n", str);
        }
        else
        {
        twoei:
        {
            eth = two = 0;
            long int number;
            sscanf(str, "%ld", &number);
            int rem = number % 10;
            if (rem < 2)
            {
                number += (2 - rem);
            }
            else if (rem > 2 && rem < 8)
            {
                number += (8 - rem);
            }
            else if (rem > 8)
            {
                number += 3;
            }
            else if(rem==2)
            {
                number+=6;
            }
            else if (rem==8)
            {
                number+=4;
            }
            
            sprintf(str, "%ld", number);
            goto check;
        }
        }

        t--;
    } while (t > 0);
    return 0;
}
