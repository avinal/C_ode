#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
    int test;
    cin >> test;
    while (test > 0)
    {
        vector<int> people;
        int input, size;
        cin >> size;
        for (int i = 0; i < size; i++)
        {
            cin >> input;
            people.push_back(input);
        }
        vector<int> dist;
        for (int i = 1; i < size; i++)
        {
            dist.push_back(people[i] - people[i - 1]);
        }

        vector<int> infected(dist.size(), 0);
        int j = 0;
        for (int i = 0; i < dist.size(); i++)
        {
            if (dist[i] <= 2)
            {
                infected[j]++;
            }
            else
            {
                j++;
            }
        }
        infected.resize(j);
        vector<int>::iterator ip;
        ip = unique(infected.begin(), infected.end());
        infected.resize(distance(infected.begin(), ip));
        sort(infected.begin(), infected.end());
        int maxi = infected.back() + 1;

        int mini = infected.front() + 1;
        cout << mini << " " << maxi;
        test--;
    }
    return 0;
}
