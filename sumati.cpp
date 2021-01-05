#include <iostream>
#include <vector>
using namespace std;
class solution
{
public:
    vector<string> candy(vector<int> candies, int extra)
    {
        int greatest = -1;
        int size = candies.size();

        vector<string> result(size, "false");
        for (int i = 0; i < size; i++)
        {
            if (candies[i] > greatest)
                greatest = candies[i];
        }
        for (int i = 0; i < size; i++)
        {
            if (candies[i] + extra >= greatest)
                result[i] = "true";
        }
        return result;
    }
};
int main()
{
    solution anil;
    vector<string> result = anil.candy({1, 4, 6, 7, 4}, 3);
    for (auto i : result)
    {
        cout << i << " ";
    }
    return 0;
}