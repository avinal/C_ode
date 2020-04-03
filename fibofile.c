#include<stdio.h>
int main()
{
    int n, st=0, k, p=1, t;
    FILE *fr;
    fr=fopen("file.txt", "w");
	printf("Enter number of terms of Fibonacci sequence:");
	scanf("%d",&n);
	for(k=0; k<=n; k++)
	{
	fprintf(fr, "%d", p);
    fprintf(fr,"\n");
	t=st+p;
	st=p;
	p=t;
	}
    fclose(fr);
    return 0; 
}