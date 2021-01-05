/**
 * /mnt/z/my_git/C_ode/mriga12.cpp
 * @author Avinal Kumar
 * @since January 05, 2021
 *
 * https://www.codechef.com/JAN21C/problems/BILLRD
 */



#include <iostream>
using namespace std;

struct cord
{
    int x, y;
    cord swap()
    {
        return {y, x};
    }
};

int main(int argc, char const *argv[])
{
    int test = 0;
    int N, K;
    cord start;
    cin >> test;
    while (test)
    {
        cin >> N >> K >> start.x >> start.y;
        if (start.x == start.y)
        {
            cout << N << " " << N << endl;
        }
        else if (start.x < start.y)
        {
            cord collision[4];
            collision[1] = {N - start.y + start.x, N};
            collision[2] = collision[1].swap();
            collision[3] = {N - collision[1].x, 0};
            collision[0] = collision[3].swap();
            int rem = K % 4;
            cout << collision[rem].x << " " << collision[rem].y << endl;
        }
        else if (start.x > start.y)
        {
            cord collision[4];
            collision[1] = {N, N - start.x + start.y};
            collision[2] = collision[1].swap();
            collision[3] = {0, N - collision[1].y};
            collision[0] = collision[3].swap();
            int rem = K % 4;
            cout << collision[rem].x << " " << collision[rem].y << endl;
        }
        test--;
    }
    return 0;
}
