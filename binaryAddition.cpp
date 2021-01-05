/*
D:\C\C_ode\binaryAddition.cpp
Avinal Kumar
April 06, 2020
A Binary Number Adding Program 
*/
#include <iostream>
class Binary
{
    std::string number;

public:
    Binary(std::string num) : number(num) {}
    void display()
    {
        std::cout << number << std::endl;
    }
    void add(std::string num2)
    {
        bool carry = false;
        for (int i = number.length() - 1; i >= 0; i--)
        {
            if (carry)
            {
                if (number.at(i) == '1' && num2.at(i) == '1')
                {
                    number.at(i) = '1';
                    carry = true;
                }
                else if (number.at(i) == '0' && num2.at(i) == '0')
                {
                    number.at(i) = '1';
                    carry = false;
                }
                else
                {
                    number.at(i) = '0';
                    carry = true;
                }
            }
            else
            {
                if (number.at(i) == '1' && num2.at(i) == '1')
                {
                    number.at(i) = '0';
                    carry = true;
                }
                else if (number.at(i) == '0' && num2.at(i) == '0')
                {
                    number.at(i) = '0';
                    carry = false;
                }
                else
                {
                    number.at(i) = '1';
                    carry = false;
                }
            }
        }
    }
};

int main(int argc, char const *argv[])
{
    std::cout << "Enter two 4 bit binary numbers" << std::endl;
    std::string num1, num2;
    std::cin >> num1 >> num2;
    Binary a(num1);
    a.add(num2);
    a.display();
    system("pause");
    return 0;
}
