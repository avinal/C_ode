#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
int main()
{
    int w;
    int n;
    cin >> w >> n;
    vector<int> marks;
    queue<int> doubt;
    vector<int> wait;
    int input;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        marks.push_back(input);
        if (doubt.size() == 0 || doubt.back() >= input)
        {
            doubt.push(input);
        }
        else
        {
            if (wait.size() == w)
            {
                sort(wait.begin(), wait.end());
                doubt.push(wait[0]);
                wait.erase(wait.begin());
            }
            wait.push_back(input);
        }
    }
    sort(wait.begin(), wait.end());
    for (int i = 0; i < wait.size(); i++)
    {
        doubt.push(wait[i]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << doubt.front() << endl;
        doubt.pop();
    }
    return 0;
}