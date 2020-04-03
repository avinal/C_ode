#include<stdio.h>
int main()
{
    int step, i;
    scanf("%d", &step);
    printf("*   *\n");
    printf("*   *\n");
    for(i=1; i<=step; i++)
    {
        printf("*****\n");
        printf("*   *\n");
        printf("*   *\n");
    }
    return 0;
}