#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    int i = 1, li = 0,flag=0;
    while (i<8000)
    {
        int jo = 2 * i - 1;
        for (int k = 1;2*k*k<jo; k++)
        {
            int f = jo - 2 * pow(k, 2);
            for (int l = 1; l * l < f; l++)
            {
                if (f % l == 0)
                {
                    li++;
                }
                else
                {
                    continue;
                }
            }
            if(li!=1)
            {
                printf("%d ",jo);
                flag=1;
                break;
            }
        }
        i++;
    }

    return 0;
}
