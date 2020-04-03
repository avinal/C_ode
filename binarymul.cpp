/*

D:\C\binarymul.cpp
Avinal Kumar
August 20, 2019
Multiplies two binary numbers using shift mechanism
*/

#include <iostream>
#include <string>

std::string add(std::string m1, std::string m2);
std::string shiftMechanism(std::string m_end, std::string m_ier);

int main()
{
    std::string multiplend, multiplier;
    std::cin >> multiplend >> multiplier;
    std::string pro = shiftMechanism(multiplend, multiplier);
    std::cout << multiplend << " X " << multiplier << " = " << pro << std::endl;
    system("pause");
    return 0;
}

/*
The Shift Mechanism
m_end: multiplend
m_end: multiplier
return: modified multiplend
*/
std::string shiftMechanism(std::string m_end, std::string m_ier)
{
    int len1 = m_end.length();
    int len2 = m_ier.length();

    if (len2 > len1)
    {
        std::swap(m_end, m_ier);
        std::swap(len1, len2);
    }

    for (int i = 0; i < len1; i++)
    {
        m_end += '0';
    }

    for (int i = (2 * len1 - len2); i != 0; i--)
    {
        m_ier = '0' + m_ier;
    }

    for (int i = 0; i < len1; i++)
    {
        if (m_end.at(0) == '0')
        {
            m_end.erase(0, 1);
            m_end += '0';
        }
        else if (m_end.at(0) == '1')
        {
            m_end.erase(0, 1);
            m_end += '0';
            m_end = add(m_end, m_ier);
        }
    }

    while (m_end[0] == '0')
    {
        m_end.erase(0, 1);
    }

    return m_end;
}

/*
Binary Addition Procedure
m1: first number
m2: Second number
return: resultant binary number
*/
std::string add(std::string m1, std::string m2)
{
    std::string m3 = "\0";
    char carry = '0';

    for (std::string::reverse_iterator it1 = m1.rbegin(), it2 = m2.rbegin();
         it1 != m1.rend() && it2 != m2.rend();
         ++it1, ++it2)
    {
        if (carry == '0')
        {
            if (*it1 == '0' && *it2 == '0')
            {
                m3 = '0' + m3;
            }
            else if ((*it1 == '0' && *it2 == '1') || (*it1 == '1' && *it2 == '0'))
            {
                m3 = '1' + m3;
            }
            else if (*it1 == '1' && *it2 == '1')
            {
                m3 = '0' + m3;
                carry = '1';
            }
        }
        else if (carry == '1')
        {
            if (*it1 == '0' && *it2 == '0')
            {
                m3 = '1' + m3;
                carry = '0';
            }
            else if ((*it1 == '0' && *it2 == '1') || (*it1 == '1' && *it2 == '0'))
            {
                m3 = '0' + m3;
                carry = '1';
            }
            else if (*it1 == '1' && *it2 == '1')
            {
                m3 = '1' + m3;
                carry = '1';
            }
        }
    }

    if (carry == '1')
    {
        m3 = '1' + m3;
    }

    return m3;
}