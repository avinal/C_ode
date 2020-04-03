#include <iostream>
#include <vector>

int makeEqual(std::vector<int> array, int size)
{
    std::vector<int> reduced;
    
}
int main(int argc, char const *argv[])
{
    int size;
    std::cin >> size;
    std::vector<int> array;
    int ele;
    for (int i = 0; i < size; i++)
    {
        std::cin >> ele;
        array.push_back(ele);
    }
    
    makeEqual(array, size);
    return 0;
}
