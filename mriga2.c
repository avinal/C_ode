#include <stdio.h>

int main()
{
    int test, m, n;
    scanf("%d", &test);
    while (test--)
    {
        scanf("%d%d", &n, &m);
        int cats[100];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &cats[i]);
        }
        int k = n * (n + 1) / 2, sum = 0, p = 0;
        for (int j = 0; j < m; j++)
        {
            if (m >= n)
            {
                for (int y = p; y < n + p; y++)
                {
                    sum += cats[y];
                }
                if (sum != k)
                {
                    printf("NO\n");
                    break;
                }
            }
            else
            {
                int low=0, high=n;
                for(int l=1; l<=m;l++ )
                {
                    low+=l;
                    high+=(n-l);
                    sum+=cats[p+l-1];
                }
                if(sum>low )

            }
            sum = 0;
            p += n;
            m -= n;
        }
    }
}