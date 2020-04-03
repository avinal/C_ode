#include <iostream>

void sequence(int n,
              const int arr[],
              int x,
              int &location)
{
    location = 1;
    while (location <= n && arr[location] != x)
    {
        location++;
    }
    if (location > n)
    {
        location = 0;
    }
}
int main()
{
    int arr[] = {1, 4, 65, 2, 7, 23, 42, 17, 19, 0, 5, 27, 29};
    int location;
    sequence(13, arr, 42, location);
    std::cout << location;
    system("pause");
    return 0;
}