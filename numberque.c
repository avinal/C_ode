#include <stdio.h>
int main()
{
    int size, no_query, query;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &no_query);
    for (int j = 0; j < no_query; j++)
    {
        int match =0;
        scanf("%d", &query);
        for (int k = 0; k < size; k++)
        {
            if (arr[k] == query)
            {
                match++;
            }
        }
        if (match == 0)
        {
            printf("NOT PRESENT\n");
        }
        else
        {
            printf("%d\n", match);
        }
    }
}