#include <iostream>
using namespace std;
class matrix
{
public:
    int mm, nn;
    void initialize(int m, int n)
    {
        mm = m;
        nn = n;
    }
    void addition(int **a, int **b)
    {
        int **sum = new int *[mm];
        for (int i = 0; i < mm; ++i)
        {
            sum[i] = new int[nn];
        }
        for (int i = 0; i < mm; i++)
        {
            for (int j = 0; j < nn; j++)
            {
                sum[i][j] = a[i][j] + b[i][j];
                cout << sum[i][j] << "\t";
            }
            cout << "\n";
        }
    }
    void multiplication(int **a, int **b)
    {
        int **product = new int *[mm];
        for (int i = 0; i < mm; ++i)
        {
            product[i] = new int[nn];
        }
        for (int i = 0; i < mm; i++)
        {
            for (int j = 0; j < nn; j++)
            {
                product[i][j] = 0;
            }
        }
        for (int i = 0; i < mm; i++)
        {
            for (int j = 0; j < nn; j++)
            {
                for (int k = 0; k < nn; k++)
                {
                    product[i][j] += a[i][k] * b[k][j];
                }
                cout << product[i][j] << "\t";
            }
            cout << "\n";
        }
    }
};


int main()
{
    int m, n;
    cout << "Enter the size of matrices(M X N):";
    cin >> m;
    cin >> n;
    int **a = new int *[m];
    for (int i = 0; i < m; ++i)
    {
        a[i] = new int[n];
    }
    int **b = new int *[m];
    for (int i = 0; i < m; ++i)
    {
        b[i] = new int[n];
    }
    cout << "Enter the first matrix elements:";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "Enter the second matrix elements:";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> b[i][j];
        }
    }
    cout << "Matrix A:\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << "\n";
    }
    cout << "Matrix B:\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << b[i][j] << "\t";
        }
        cout << "\n";
    }
    matrix ob;
    ob.initialize(m, n);
    cout << "Sum:\n";
    ob.addition(a, b);
    cout << "Product:\n";
    ob.multiplication(a, b);
    system("pause");
    return 0;
}