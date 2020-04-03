#include <iostream>

std::string decimal2binary(int deci)
{
    int remi;
    std::string bina = "";
    while (deci > 0)
    {
        remi = deci % 2;
        if (remi)
        {
            bina = '1' + bina;
        }
        else
        {
            bina = '0' + bina;
        }
        deci = deci / 2;
    }
    return bina;
}

int binary2decimal(std::string bina)
{
    int et, exp = 1, dec = 0, length = bina.length();
    for (int n = 0; n < length; ++n)
    {
        char temp = bina.at(n);
        (temp == '1') ? et = 1 : et = 0;
        
    }
    return dec;
}

int main()
{
    int deci;
    std::cout << "Enter a number";
    std::cin >> deci;
    std::string binary = decimal2binary(deci);
    (binary.length() % 2 == 0 ? binary : '0' + binary);
    for (int i = 0; i <= binary.length() / 2; i += 2)
    {
        char temp = binary.at(i);
        binary.at(i) = binary.at(i + 1);
        binary.at(i + 1) = temp;
    }
    std::cout << "The output is" << binary2decimal(binary);
    system("pause");
    return 0;
}