#include <stdio.h>
struct tym
{
    int hour;
    int min;
    int seco;
};
typedef struct tym time;
int main()
{
    time a, b, c;
    printf("Enter time in hour min sec.\n");
    scanf("%d%d%d%d%d%d", &a.hour, &a.min, &a.seco, &b.hour, &b.min, &b.seco);
    c.seco = (b.seco + 60 * b.min + 3600 * b.hour) - (a.seco + a.min * 60 + a.hour * 3600);
    c.hour = c.seco / 3600;
    c.seco %= 3600;
    c.min = c.seco / 60;
    c.seco %= 60;
    printf("%d : %d : %d", c.hour, c.min, c.seco);
    return 0;
}