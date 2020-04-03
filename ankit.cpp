#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count = 0;
    int k = 0, s = 0;
    cin >> n;
    long brr[n], var;
    vector<int> vect;
    for (int i = 0; i < n; i++)
    {
        cin >> var;
        vect.push_back(var);
    }

    for (int i = 0; i < n; i++)
    {
        var = vect[i];
        vect[i] = 0;

        //sort(vect.begin(),vect.end());
        k = *max_element(vect.begin(), vect.end());
        s = accumulate(vect.begin(), vect.end(), 0) - k;

        if (k == s)
        {
            count++;
            brr[count] = i + 1;
        }
        vect[i] = var;
    }
    cout << count << endl;
    for (int t = 1; t <= count; t++)
    {
        cout << brr[t] << " ";
    }
    return 0;
}