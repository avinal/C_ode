#include <stdio.h>
struct nam
{
    char first_name[10];
    char middle_name[10];
    char last_name[10];
};
typedef struct nam name;
struct date
{
    int mm;
    int dd;
    int yyyy;
};
typedef struct date dob;
struct mark
{
    float english;
    float math;
    float comsci;
};
typedef struct mark marks;
struct student
{
    name NAME;
    int ROLL;
    char SEX;
    marks MARKS;
    dob DOB;
};
typedef struct student BOY;
int main()
{
    BOY b1;
    printf("Enter details of student .\n");
    printf("\nName :");
    scanf("%s%s%s", b1.NAME.first_name, b1.NAME.middle_name, b1.NAME.last_name);
    printf("\nRoll No. :");
    scanf("%d", &b1.ROLL);
    printf("\nSex :");
    scanf(" %c", &b1.SEX);
    printf("Marks in English, Mathematics and Computer Science :");
    scanf("%f%f%f", &b1.MARKS.english, &b1.MARKS.math, &b1.MARKS.comsci);
    printf("Date of birth, dd mm yyyy :");
    scanf("%d%d%d", &b1.DOB.dd, &b1.DOB.mm, &b1.DOB.yyyy);
    printf("%s %s %s", b1.NAME.first_name, b1.NAME.middle_name, b1.NAME.last_name);
    return 0;
}
