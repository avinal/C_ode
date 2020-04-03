#include <iostream>

void referSwap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int x, y, option;
    std::cout << "Enter two numbers" << std::endl;
    std::cin >> x >> y;
    std::cout << "Now x = " << x << " and y = " << y << std::endl
              << "How you wanna swap the numbers ??" << std::endl
              << "1. Using Call by Reference" << std::endl
              << "2. Without using third variable" << std::endl;
    std::cin >> option;
    
    switch (option)
    {
    case 1:
        referSwap(&x, &y); //passing arguments via pointers
        break;
    case 2: //using bitwise XOR
        x = x ^ y;
        y = x ^ y;
        x = x ^ y;
        break;
    }

    std::cout << "After swapping x = " << x << " and y = " << y << std::endl;

    return 0;
}