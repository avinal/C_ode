#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n, k, in;
        cin >> n >> k;
        vector<int> A;
        for (int i = 0; i < n; i++)
        {
            cin >> in;
            A.push_back(in);
        }
        int a, b;
        for (int j = 0; j < k; j++)
        {
            a = A.at(j % n);
            b = A.at(n - (j % n) - 1);
            A.at(j % n) = a ^ b;
        }
        for (auto p : A)
        {
            cout << p << " ";
        }
        cout << endl;
    }
    return 0;
}