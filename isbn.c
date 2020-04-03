#include<stdio.h>
int main()
{
    int isbn, prosum=0,i;
    scanf("%d", &isbn);
    for(i=1; i<=10; i++)
    {
        prosum=prosum+(isbn%10)*(11-i);
        isbn=isbn/10;
    }
    if(prosum%11==0)
    {
        printf("Legal ISBN");
    }
    else
    {
        printf("Illegal ISBN");
    }
}