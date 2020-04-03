#include<stdio.h>
int main()
{
    int size,i, del;
    printf("Enter the number of enteries.");
    scanf("%d", &size);
    int arr[size];
    for(i=0; i<size;i++ )
    {
        scanf("%d",&arr[i]);
    }
    printf("Position of the element to be deleted");
    scanf("%d", &del);
    for(i=del-1; i<size; i++)
    {
        arr[i]=arr[i+1]
    }
    for(i=0; i<size-1;i++ )
    {
        printf("%d ",arr[i]);
    }
    printf("%d", arr[size+1]);
}