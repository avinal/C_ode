#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("Enter the number of elements.\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements.");
    for(int i=0; i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    long sum=0;
    for(int i=0; i<n; i++)
    {
        sum+=pow(arr[i],2);
    }
    printf("The sum of squares of the numbers is %ld.",sum );
    return 0;
}