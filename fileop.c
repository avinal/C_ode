#include<stdio.h>
int main()
{
    FILE *fr;
    char ch;
    fr=fopen("file.txt", "r");
    while((ch=fgetc(fr))!=EOF)
    {
        printf("%c", ch);
    }
    fclose(fr);
    printf("\n");
}