#include <iostream>

int main(int argc, char const *argv[])
{
    int size;
    std::cout << "Enter the size of the array " << std::endl;
    std::cin >> size;
    int *array{new int[size]};
    std::cout << "Enter elements of the array" << std::endl;
    int ele;
    for (int i = 0; i < size;i++)
    {
        std::cin >> ele;
        array[i] = ele;
    }
    std::cout << "enter partition element" << std::endl;
    std::cin >> ele;
    
    return 0;
}
