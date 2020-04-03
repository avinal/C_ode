#include<stdio.h>
int main()
{
    int arr[100];
    printf("Enter the elements of array.");
    for(int i=0; i<100; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The pairs having their sum 50 are :\n");
    for(int i=0; i<100;i++)
    {
        for(int j=i; j<100; j++)
        {
            if(arr[i]+arr[j]==50 && i!=j)
            {
                printf("(%d, %d)\n", arr[i],arr[j]);
                arr[i]=0;
                arr[j]=0;
            }
            else
            {
                continue;
            }
        }
    }
    return 0;
}