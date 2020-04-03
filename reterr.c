#include<stdio.h>
int matadd(int ii, int jj);
int main()
{
    int i=10 , j=30, c,d;
    c= matadd(i, j);
    d= matadd(i,j);
    printf("%d %d", c,d);

}
int matadd(int ii, int jj)
{
    int p,q;
    p= ii+jj;
    q=ii*jj;
    return(q,p);
}