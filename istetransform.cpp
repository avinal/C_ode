#include <iostream>
using namespace std;
bool check(long long int, long long int, long long int);
struct istetransform
{
    long long int x, y;
};
typedef struct istetransform point;
int main(int argc, char const *argv[])
{
    point initial, terminal;
    cin >> initial.x >> initial.y;
    cin >> terminal.x >> terminal.y;
    if (check(initial.x, terminal.x, initial.y) && check(initial.y, terminal.y, initial.x))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    return 0;
}
bool check(long long int st, long long int fi, long long int step)
{
    long long int remin;
    remin = fi % (st + step);

    if (remin % st == 0 || remin % step == 0)
    {
        return (true);
    }
    else
    {
        return (false);
    }
}