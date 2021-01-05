/*
D:\C\C_ode\mriga10.cpp
Avinal Kumar
April 07, 2020
A social distencing Program
*/
#include <iostream>
#include <vector>
int main(int argc, char const *argv[])
{
    int test;
    std::cin >> test;
    while (test > 0)
    {
        int size, input;
        std::cin >> size;
        bool is_true = false;
        int last, count = 0;
        std::vector<int> dist;
        for (int i = 0; i < size; i++)
        {
            std::cin >> input;
            dist.push_back(input);
        }

        for (int i = 0; i < size; i++)
        {
            if (dist[i])
            {
                if (count > 4)
                {
                    is_true = true;
                    count = 0;
                }
                else
                {
                    is_true = false;
                }
            }
            else
            {
                count++;
            }
        }
        std::cout << (is_true ? "YES" : "NO") << std::endl;
        test--;
    }
    system("pause");
    return 0;
}
