#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int days, pra;
        cin >> days;
        vector<int> price;
        for (int i = 0; i < days; i++)
        {
            cin >> pra;
            price.push_back(pra);
        }
        int k = 1, j = 0, count = 1;
        while (days--)
        {

            int min = *min_element(price.begin() + j, price.begin() + j + k);
            if (min == price[k])
            {
                count++;
            }
            if (k < 6)
            {
                k++;
            }
            else
            {
                j++;
                k++;
            }
        }
        cout << count;
    }
    return 0;
}