#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    do
    {
        int initial, final;
        scanf("%d%d", &initial, &final);
        int int_copy = initial;
        for (int i = initial + 1; i <= final; i++)
        {
            int_copy = int_copy ^ i;
        }
        if (int_copy % 2 == 0 && final != initial)
        {
            printf("Even\n");
        }
        else if (final == initial)
        {
            printf("Odd\n");
        }
        else
        {
            printf("Odd\n");
        }
        test--;
    } while (test != 0);
}