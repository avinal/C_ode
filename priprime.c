#include<stdio.h>
#include<math.h>
#include<stdlib.h>
char prime(int);
int main()
{
	int f,l,j,c,  t=0;
    char p,i;
	scanf("%d%d",&f, &l);
	for(j=f; j<=l;j++)
	{
        p=prime(j);
        c=j;
        if(p=='y')
        {
            do
            {
                t=t+(j%10);
                j=j/10;
            }
            while(j!=0);
        }
        else
        {
            continue;
        }
        i=prime(t);
        if(i=='y')
        {
            printf("%d ",c);
        }
        else
        {
            continue;
        }
	}
}
char prime(int j)
{
    int p=0,i;
	for(i=1; i<=j; i++)
	{
		if(j%i==0)
		{
			p++;
		}
		else
		{
			continue;
		}
	}
    if(p==2)
		{
			return('y');
		}
        else
        {
            return('n');
        }

}