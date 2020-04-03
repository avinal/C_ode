#include <iostream>

int main(int argc, char const *argv[])
{
    std::string dividend;
    std::cout << "Enter a big integer" << std::endl;
    std::cin >> dividend;
    int *array{new int[dividend.length()]};
    for (int i = 0; i < dividend.length(); i++)
    {
        array[i] = dividend.at(i) - '0';
    }
    int divisor;
    std::cout << "Enter the divisor";
    std::cin >> divisor;
    int mod = 0, *quo{new int[dividend.length()]};
    for (int i = 0; i < dividend.length(); i++)
    {
        quo[i] = (mod * 10 + array[i]) / divisor;
        mod = (mod * 10 + array[i]) % divisor;
    }
    std::cout << "Quotient = ";
    for (int i = 0; i < dividend.length(); i++)
    {
        if (quo[i])
        {
            std::cout << quo[i];
        }
    }
    std::cout << "\nReminder = " << mod;
    system("pause");
    return 0;
}
