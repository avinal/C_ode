#include <stdio.h>

int main()
{
    int test, n;

    scanf("%d", &test);
    while (test--)
    {
        scanf("%d", &n);
        int goal[10000][3], compare[3];
        for (int j = 0; j < n; j++)
        {
            scanf("%d%d%d", &goal[j][0], &goal[j][1], &goal[j][2]);
        }
        if (goal[0][0] == 2)
        {
            printf("NO\n");
        }
        else if (goal[0][0] == 1)
        {
            printf("YES\n");
        }
        compare[0] = goal[0][0];
        compare[1] = goal[0][1];
        compare[2] = goal[0][2];
        for (int i = 1; i < n; i++)
        {

            if (goal[i][0] == 1)
            {
                printf("YES\n");
            }
            else if (goal[i][1] == goal[i][2])
            {
                printf("YES\n");
            }
            else if (goal[i][1] - compare[1] < 0 || goal[i][2] - compare[2] < 0)
            {
                printf("YES\n");
            }
            else if (goal[i][1] - compare[2] < 0 || goal[i][2] - compare[1] < 0)
            {
                printf("YES\n");
            }
            else if (goal[i][1] - compare[1] == goal[i][2] - compare[2])
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
            compare[0] = goal[i][0];
            compare[1] = goal[i][1];
            compare[2] = goal[i][2];
        }
    }
    
    return 0;
}