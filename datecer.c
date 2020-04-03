#include <stdio.h>
#include <stdlib.h>
struct dat
{
    int dd;
    int mm;
    int yyyy;
};
typedef struct dat date;
int main()
{
    date a;
    printf("\nEnter a date in day month and year:");
    scanf("%d%d%d", &a.dd, &a.mm, &a.yyyy);
    if (a.dd < 32)
    {
        if (a.dd == 31 && (a.mm == 2 || a.mm == 4 || a.mm == 6 || a.mm == 9 || a.mm == 11))
            ;
        {

            printf("Not a valid date !!");
        }
        else if (a.dd == 29 )
        {
            printf("Not a valid date !!");
        }
    }
    else
    {
        printf("Not a valid date !!");
    }
    return 0;
}