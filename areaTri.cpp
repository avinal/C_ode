#include <iostream>

class Area
{
    float a, b, c;

public:
    Area(float x, float y, float z) : a(x), b(y), c(z)
    {
    }
    Area(float x, float y) : a(x), b(y) {}
    float baseheight()
    {
        return (0.5 * a * b);
    }

    float threeSide()
    {
        float semiper = (a + b + c) / 2;
        float aria = semiper * (semiper - a) * (semiper - b) * (semiper - c);
        aria = sqrtf(aria);
        return aria;
    }
};

int main()
{
    std::string option;
    int a, b, c;

    std::cout << "Enter bs for base height and th for three sides " << std::endl;
    std::cin >> option;
    if (!option.compare("bs"))
    {
        std::cin >> a >> b;
        Area A(a, b);
        std::cout << "The Area of the triangle is " << A.baseheight() << std::endl;
    }
    else if (!option.compare("th"))
    {
        std::cin >> a >> b >> c;
        Area A(a, b, c);
        std::cout << "The Area of the triangle is " << A.threeSide() << std::endl;
    }
    else
    {
        std::cerr << "Inappropiate choice";
    }

    return 0;
}