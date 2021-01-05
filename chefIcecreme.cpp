#include <iostream>

using namespace std;
int main(int argc, char const *argv[])
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        int coin[]{0, 0};
        int ice;
        bool success = false;
        for (size_t i = 0; i < n; i++)
        {
            cin >> ice;
            if (ice == 5)
            {
                coin[0]++;
            }
            else if (ice == 10)
            {
                if (coin[0] > 0)
                {
                    coin[1]++;
                    coin[0]--;
                    success = true;
                }
                else
                {
                    success = false;
                    break;
                }
            }
            else if (ice == 15)
            {
                if (coin[1] > 0)
                {
                    coin[1]--;
                    success = true;
                }
                else if (coin[0] > 1)
                {
                    coin[0] -= 2;
                    success = true;
                }
                else
                {
                    success = false;
                    break;
                }
            }
        }
        cout << (success ? "YES" : "NO") << endl;
    }
    return 0;
}
