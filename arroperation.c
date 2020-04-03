#include <stdio.h>
#include <string.h>

int main()
{
    int arr[21], elements;
    printf("Enter the number of elements in the array");
    scanf(" %d", &elements);
    printf("Enter the elements of the array.\n");
    for (int i = 0; i < elements; i++)
    {
        scanf("%d", &arr[i]);
    }
    int position, value;
    char command[7];
    printf("Enter the command ");
    scanf("%s", command);
    if (strcmp(command, "insert") == 0)
    {
        scanf("%d%d", &position, &value);
        for (int j = elements; j >= position; j--)
        {
            arr[j] = arr[j - 1];
        }
        arr[position-1] = value;
        elements++;
    }
    else if (strcmp(command, "delete") == 0)
    {
        scanf("%d", &position);
        for (int i = position-1; i < elements; i++)
        {
            arr[i] = arr[i + 1];
        }
        elements--;
    }
    for (int i = 0; i < elements; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}
