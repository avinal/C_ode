#include<stdio.h>
int main()
{
    int a1, a2;
    printf("Enter number of elements in first sorted array.");
    scanf("%d", &a1);
    int arr1[a1];
    printf("Enter the elements of first array.");
    for(int i=0; i<a1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter number of elements in second sorted array.");
    scanf("%d", &a2);
    int arr2[a2];
    printf("Enter the elements of second array.");
    for(int i=0; i<a2; i++)
    {
        scanf("%d", &arr2[i]);
    }
    int a3=a1+a2, arr3[a3], in1=0, in2=0 , in=0;
    while(in1<a1 && in2<a2)
    {
        if(arr1[in1]<arr2[in2])
        {
            arr3[in]=arr1[in1];
            in1++;
        }
        else
        {
            arr3[in]=arr2[in2];
            in2++;
        }
        in++;
    }
    if(in1==a1)
    {
        while(in2<a2)
        {
            arr3[in]=arr2[in2];
            in++;
            in2++;
        }
    }
    else if(in2==a2)
    {
        while(in1<a1)
        {
            arr3[in]=arr1[in1];
            in++;
            in1++;
        }
    }
    for(int i=0; i<a3; i++)
    {
        printf("%d\n", arr3[i]);
    }
    return 0;
}