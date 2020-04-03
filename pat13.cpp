#include <iostream>
using namespace std;
int main()
{
    int n, k = 1, p;
    cin >> n;
    p = n;
    do
    {
        for (int i = n; i != p; i++)
        {
            if (n != 0)
            {
                cout << "--";
            }
        }
        for (int i = k; i < n + k; i++)
        {
            cout << i << "*";
        }
        for (int j = n * n + k; j < n * n + k + n; j++)
        {
            cout << j;
            if (j != n * n + k +n- 1)
            {
                cout << "*";
            }
        }
        k += n;
        cout << endl;
    } while (n--);
    system("pause");
    return 0;
}