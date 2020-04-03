#include <iostream>

int main(int argc, char const *argv[])
{
    int a_size;
    std::cout << "Enter the size of the array" << std::endl;
    std::cin >> a_size;
    int *array{new int[a_size]};
    std::cout << "Enter non-zero elements of the array" << std::endl;
    int element;
    for (int i = 0; i < a_size; i++)
    {
        std::cin >> element;
        array[i] = element;
    }
    int duplicate = 0;
    for (int i = 0; i < a_size; i++)
    {
        int j = i;
        while (array[i] == array[j + 1])
        {
            array[j + 1] = 0;
            duplicate++;
            j++;
            i++;
        }
    }
    for (int i = 0; i < a_size; i++)
    {
        std::cout << array[i] << " ";
    }
    std::cout << a_size - duplicate;
    system("pause");
    return 0;
}
