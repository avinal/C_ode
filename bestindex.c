#include <stdio.h>
int main()
{
    int size;
    scanf("%d", &size);
    int initial_arr[size], final_arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &initial_arr[i]);
    }
    for (int i = 0; i < size; i++)
    {
        final_arr[i] = 0;
        int n = 0, p = 0;
        do
        {
            p++;
            n += p;
        } while ((i + n) < size);
        if((i+n)>size)
        {
            n-=p;
        }
        for (int j = i; j < (i + n); j++)
        {
            final_arr[i] += initial_arr[j];
        }
    }
    for (int i = 0; i < size; i++)
    {
        int temp;
        for (int j = i + 1; j < size; j++)
        {
            if (final_arr[i] > final_arr[j])
            {
                temp = final_arr[i];
                final_arr[i] = final_arr[j];
                final_arr[j] = temp;
            }
        }
    }
    printf("\n%d",final_arr[size-1]);
    return 0;
}