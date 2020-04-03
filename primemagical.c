#include <stdio.h>
#include <string.h>
int checkPrime(int, int *, int *);
int main()
{
    int test, pre = 0, post = 0, one, change, length;
    scanf("%d", &test);
    while (test != 0)
    {
        scanf("%d", &length);
        char string[length];
        scanf("%s", string);
        for (int i = 0; i < length; i++)
        {
            one = string[i];

            checkPrime(one, &pre, &post);
            if ((pre >= 65 && post <= 90) || (pre >= 97 && post <= 122))
            {
                change = (((one - pre) > (post - one)) ? post : pre);
            }
            else if (pre < 65 || pre < 97)
            {
                change = post;
            }
            else if (post > 90 || post > 122)
            {
                change = pre;
            }
            string[i] = change;
            post = 0;
            pre = 0;
        }
        printf("%s", string);
    }
    return 0;
}
int checkPrime(int one, int *pr, int *po)
{
    int l;
    for (l = one; *po == 0; l++)
    {
        for (int k = 2; k < l; k++)
        {
            if (l % k != 0)
            {
                *po = l;
                continue;
            }
            else
            {
                *po = 0;
                break;
            }
        }
    }
    for (l = one; *pr == 0; l--)
    {
        for (int k = 2; k < l; k++)
        {
            if (l % k != 0)
            {
                *pr = l;
                continue;
            }
            else
            {
                *pr = 0;
                break;
            }
        }
    }
    return 0;
}