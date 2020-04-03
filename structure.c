#include <stdio.h>
#include <stdlib.h>

struct boy_st
{
    char name[15];
    int age;
    float marks;
};
typedef struct boy_st boy;
typedef struct
{
    char name[15];
    char friend[20];
    char money;
}student;

int main()
{
    student s1;
    int size;
    printf("\nEnter the number of students. ");
    scanf("%d", &size);
    boy b[size];
    printf("\nEnter the name, age and marks of the student as name<spc>age<spc>marks");
    for (int i = 0; i < size; i++)
    {
        scanf("%s%d%f", b[i].name, &b[i].age, &b[i].marks);
    }
    printf("SNo. Name    Age     Marks\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d %s    %d      %f\n", i+1, b[i].name, b[i].age, b[i].marks);
    }
    return (0);
}