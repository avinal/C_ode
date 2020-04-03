#include<stdio.h>
int main()
{
    int brick, done=0, i=1;
    printf("Enter number of bricks.");
    scanf("%d", &brick);
    do
    {
        done=done+3*i;
        i++;
    }
    while(done<brick);
    done=done-3*(i-1);
    (done+i-1>brick)? printf("Patlu"): printf("Motu");

    
}