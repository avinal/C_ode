/*Write a class in c++ that mimics meter centimeter system . 
create two constructors that takes (m,cm)and (m.cm) and stores 
as meter and centimeter show addition and subtraction using a single parameter*/
#include <iostream>
#include <conio.h>
using namespace std;
class Distance
{
public:
    int m, cm;

public:
    Distance()
    {
        m = 0, cm = 0;
    }
    Distance(int mm, int cmm)
    {
        m = mm;
        cm = cmm;
    }
    Distance(float mcm)
    {
        m = floor(mcm);
        cm = ((mcm - m) * 100);
        cout << "\n"
             << m << "\n"
             << cm;
    }
    void addition(int mm, int cmm)
    {
        m += mm;
        cm += cmm;
        if (cm >= 100)
        {
            m += (cm / 100);
            cm /= 100;
        }
        cout << "\nDistance after addition :" << m << "m" << cm << "cm";
    }
    void subtraction(int mm, int cmm)
    {
        m -= mm;
        cm -= cmm;
        if (cm >= 100)
        {
            m += (cm / 100);
            cm /= 100;
        }
        cout << "\nDistance after subtraction :" << m << "m" << cm << "cm";
    }
};
int main()
{
    cout << "Enter a distance:";
    double m1 = 0;
    cin >> m1;
    Distance ob;
    Distance obj(m1);
    cout << "\nEnter another distance (for addition) in m and cm";
    int M = 0, CM = 0;
    cin >> M;
    cin >> CM;
    obj.addition(M, CM);
    cout << "\nEnter another distance (for subtraction) in m and cm";
    M = 0, CM = 0;
    cin >> M;
    cin >> CM;
    obj.subtraction(M, CM);
    system("pause");
    return 0;
}