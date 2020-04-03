#include <iostream>
#include <string>
#include <cmath>

int main()
{
    //taking string as input.
    std::string binaryStr;
    std::cout << "Enter the data bits" << std::endl;
    std::cin >> binaryStr;

    int len = binaryStr.length(), k = 0;
    //find numbers of parity bits required
    do
    {
        //put dummy parity bits
        binaryStr.insert(pow(2, k) - 1, "0");
        k++;
    } while (pow(2, k) < len + 1 + k);
    len += k;

    int check, oddp = 0;
    for (int i = 0; i < k; i++)
    {
        check = pow(2, i);
        //check for odd parity
        for (int j = check; j < len; j++)
        {
            if ((check & (j + 1)) == check)
            {
                if (binaryStr.at(j) == '1')
                {
                    oddp++;
                }
            }
        }
        if (oddp % 2 == 0)
        {
            binaryStr.at(check - 1) = '1';
        }
        oddp = 0;
    }
    
    std::cout << "The parity bits are " << binaryStr << std::endl;
    system("pause");
    return 0;
}
