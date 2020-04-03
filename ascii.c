#include<stdio.h>
int main()
{
	unsigned char key,a,b,c,e,f;
	for(key=0; key<=254; key++)
	{
		printf("%d %c\n",key, key);

	}
	a=1;
	b=6;
	c=2;
	e=3;

	f=4;
	printf("%c%c%c\n",a,b,c );
	printf("%c%c%c\n",e,b,f);
	return 0;
}