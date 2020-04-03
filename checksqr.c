#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a = 0, b = 0;
    scanf("%d%d", &a, &b);
    while (a != 0 && b != 0)
    {
        if (a >= 2 * b)
        {
            a -= 2 * b;
        }
        else if (b >= 2 * a)
        {
            b -= 2 * a;
        }
        else {
            break;
        }
    }
    printf("%d %d\n", a, b);
    return 0;
}