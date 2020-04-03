#include <stdio.h>
int main()
{
    int test, size;
    scanf("%d", &test);
    for (int i = 0; i < test; i++)
    {
        scanf("%d", &size);
        int arr[size];
        for (int j = 0; j < size; j++)
        {
            scanf("%d", &arr[j]);
        }
        for (int k = 0; k < size - 1; k++)
        {
            if (arr[k] > arr[k + 1])
            {
                printf("\n%d", arr[k + 1]);
            }
            else
            {
                printf("\n-1");
            }
            
        }
        printf("-1\n");
    }
    return 0;
}