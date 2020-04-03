#include <iostream>

using namespace std;

int &max(int &a, int &b)
{
    return ((a > b ? a : b));
}

int main()
{
    int x,y;
    cin>>x>>y;
    max(x,y)=-1;
    return 0;
}