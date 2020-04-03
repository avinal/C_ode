#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int term;
    printf("Enter the number of step of Pascal Triangle.");
    scanf("%d", &term);
    int n=1;
    for(int i=term; i>0; i--)
    {
        for(int j=1; j<i;j++)
        {
            printf(" ");
        }
        for(int k=1; k<=n; k++)
        {
        }
        n++;
    }
    return 0;
}