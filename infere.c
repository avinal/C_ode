#include<stdio.h>
int fun();
int main()
{
    printf("\n Long live India .");
    fun();
    return 0;
}
int fun()
{
    printf("\nLong live me .");
    main();
    return 0;
}