#include <iostream>
using namespace std;
class incree
{
    int i, k;

public:
    incree(int i = 0, int k = 0)
    {
        this->i = 0;
        this->k = 0;
    }

    incree operator++();
    incree operator--();
    void display();
};

incree incree::operator++()
{
    incree temp;
    temp.i = i++;
    temp.k = k++;
    return temp;
}

void incree::display()
{
    cout << "i = " << i << "k = " << k << endl;
}

incree incree::operator--()
{
    incree temp;
    temp.i = i--;
    temp.k = k--;
    return temp;
}

int main()
{
    int a, b;
    cout << "Enter two numbers" << endl;
    cin >> a >> b;
    incree icz(a, b);
    ++icz;
    icz.display();
    --icz;
    icz.display();
    system("pause");
    return 0;
}