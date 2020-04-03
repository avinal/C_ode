#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    do
    {
        int number;
        scanf("%d", &number);
        int fac[50], i, j = 0, num;
    i = 2;
    num = number;
    while (i <= number)
    {
        if (number % i == 0)
        {
            fac[j] = i;
            number = number / i;
            j++;
        }
        else
        {
            i++;
            continue;
        }
    }
    if (j == 1)
    {
        printf("1\n");
        printf("%d\n", num);
    }
    else
    {
        i = 0;
        int di = 1;
        while (i < j - 1)
        {
            if (fac[i] != fac[i + 1])
            {
                di++;
            }
            i++;
        }
        printf("%d\n", di);
        i=0;
        while (i < j - 1)
        {
            if (fac[i] != fac[i + 1])
            {
                printf("%d ", fac[i]);
            }
            i++;
        }
        printf("%d\n", fac[j - 1]);
    }
    t--;
    } while (t > 0);
    return 0;
}
