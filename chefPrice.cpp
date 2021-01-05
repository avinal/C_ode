#include <iostream>

using namespace std;
int main(int argc, char const *argv[])
{
    int test;
    cin >> test;
    while (test--)
    {
        int n, k;
        cin >> n >> k;
        int decre = 0;
        int input;
        for (size_t i = 0; i < n; i++)
        {
            cin >> input;
            if (input > k)
            {
                decre += (input - k);
            }
        }

        cout << decre << endl;
    }

    return 0;
}
