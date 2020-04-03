#include<stdio.h>
int main()
{
    FILE *fr,*fc;
    char ch;
    fr=fopen("fibofile.c", "r");
    fc=fopen("file.txt", "w");
    while((ch=fgetc(fr))!=EOF)
    {
        fputc(ch,fc);
    }
    fclose(fr);
    fclose(fc);
}