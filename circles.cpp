#include <bits/stdc++.h>
#include <math.h>
#define PI 3.14159265
using namespace std;
int main(int argc, char const *argv[])
{
    double in_radius, out_circle;
    cin >> out_circle >> in_radius;
    double dine = PI / out_circle;
    double radius = (in_radius * sin(dine)) / (1.00000000 - sin(dine));
    cout << fixed << setprecision(6) << radius << endl;
    return 0;
}
