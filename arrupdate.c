#include <stdio.h>
#include <stdlib.h>
int main()
{
    int test, size, constraint, n = 0;
    scanf("%d", &test);
    do
    {
        scanf("%d%d", &size, &constraint);
        int array[size];
        for (int i = 0; i < size; i++)
        {
            scanf("%d", &array[i]);
        }
        int op_time = 0;
        do
        {
            int small = 0;
            for (int k = 0; k < size; k++)
            {
                if (array[k] < constraint)
                {
                    small++;
                }
            }
            if (small != 0)
            {
                for (int j = 0; j < size; j++)
                {
                    array[j]++;
                }
                op_time++;
            }
            else
            {
                break;
            }

        } while (op_time != 0);
        printf("%d\n", op_time);
        n++;
    } while (n != test);
}