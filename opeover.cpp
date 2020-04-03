#include <iostream>

class complex
{
    float r, i;

public:
    complex() : r(0), i(0) {}
    complex(float x, float y) : r(x), i(y) {}
    float realPart();
    float imaginaryPart();
    complex operator+(complex add);
    void display();
};

complex complex::operator+(complex add)
{
    /*
    complex temp;
    temp.x=add.r+r;*/
    add.r += r;
    add.i += i;
    return (add);
}

float complex::imaginaryPart()
{
    return i;
}

float complex::realPart()
{
    return r;
}

void complex::display()
{
    std::cout << r
              << (i > 0 ? " + " : "  ") << i
              << "i" << std::endl;
}
int main()
{
    complex c1(1, 4), c2(5, 6), c3;
    c3 = c1 + c2;
    c3.display();
    
    return 0;
}