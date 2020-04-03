#include<stdio.h>
int main()
{
    char ch[20];
    FILE *fr;
    fr=fopen("file.txt", "w");
    printf("Enter to record in a file.");
    scanf("%s", ch);
    fprintf(fr, "%s", ch);
    fclose(fr);
    return 0;

}
