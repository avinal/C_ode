#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int increment(int x) { return x + 1; }
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n, m, q;
        cin >> n >> m >> q;
        int **arr = new int *[n];
        for (int **i = arr; i != arr + n; i++)
        {
            *i = new int[m];
            for (int *j = *i; j != *i + m; j++)
            {
                *j = 0;
            }
        }
        int x, y, count = 0;
        int arr[8];
        for (int k = 0; k < q; k++)
        {
            cin >> x >> y;
            transform(arr, arr+8, increment);
            transform(*(arr+x-1), *(arr+x-1)+m; increment);
            for (int i = 0; i < m; i++)
            {
                *(*(arr + x - 1) + i) += 1;
            }
            for (int i = 0; i < n; i++)
            {
                *(*(arr + i) + y - 1) += 1;
            }
        }
        for (int p = 0; p < n; p++)
        {
            for (int q = 0; q < m; q++)
            {
                (*(*(arr + p) + q) % 2 == 0) ? count : count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}