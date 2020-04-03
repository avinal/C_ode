#include<stdio.h>
int main()
{
	char nam[100];
	printf("What is your name !\n");
	scanf("%s", nam);
    printf("Glad to meet you, %s \n" ,  nam); //Alter use (char*)nam
	return 0;
}

