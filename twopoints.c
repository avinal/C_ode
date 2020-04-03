#include <stdio.h>
#include <math.h>
int measure_distance(int, int, int, int);
struct node
{
    int x, y;
};
typedef struct node point;
int main()
{
    int test_no, point_no, n = 0;
    scanf("%d", &test_no);
    do
    {
        scanf("%d", &point_no);
        point space[point_no];
        for (int i = 0; i < point_no; i++)
        {
            scanf("%d%d", &space[i].x, &space[i].y);
        }
        int distance[point_no][3];
        for (int i = 0; i < point_no; i++)
        {
            for (int j = 0; j < point_no; j++)
            {
                distance[j][0] = space[j].x;
                distance[j][1] = space[j].y;
                distance[j][2] = measure_distance(space[i].x, space[i].y, space[j].x, space[j].y);
            }
            int temp_x, temp_y, temp_dist;
            for (int k = 0; k < point_no; k++)
            {
                for (int l = k + 1; l < point_no; l++)
                {
                    if (distance[k][2] > distance[l][2])
                    {
                        temp_dist = distance[k][2];
                        temp_x = distance[k][0];
                        temp_y = distance[k][1];
                        distance[k][2] = distance[l][2];
                        distance[k][1] = distance[l][1];
                        distance[k][0] = distance[l][0];
                        distance[l][2] = temp_dist;
                        distance[l][1] = temp_y;
                        distance[l][0] = temp_x;
                    }
                }
            }
            for (int z = 1; z < 4; z++)
            {
                printf("%d %d ", distance[z][0], distance[z][1]);
            }
            printf("\n");
        }
        n++;
    } while (n != test_no);
    return 0;
}

int measure_distance(int x1, int y1, int x2, int y2)
{
    int dist = sqrt(pow((x1 - x2), 2) + pow((y1 - y1), 2));
    return (dist);
}