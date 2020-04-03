#include <stdio.h>
#include <stdlib.h>
struct nam
{
    char first[10];
    char middle[10];
    char last[10];
};
typedef struct nam name;
struct addr
{
    char area[15];
    char city[15];
    char state[15];
};
typedef struct addr addres;
struct emplo
{
    int emp_id;
    name NAME;
    addres ADDRESS;
    int age;
    int salary;
    char degin[15];
};
typedef struct emplo EMP;

int main()
{
    EMP em;
    printf("\nEnter emploee name :");
    scanf("%s%s%s", em.NAME.first, em.NAME.middle, em.NAME.last);
    printf("\nEnter emploee ID:");
    scanf("%d", &em.emp_id);
    printf("\nEnter your address as area, city, state:");
    scanf("%s%s%s", em.ADDRESS.area, em.ADDRESS.city, em.ADDRESS.state);
    printf("\nEnter salary:");
    scanf("%d", &em.salary);
    printf("\nEnter desination:");
    scanf("%s",em.degin);
    return 0;
}
