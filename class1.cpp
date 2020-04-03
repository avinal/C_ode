#include <bits/stdc++.h>
int n;
void sort(int *a)
{
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
int main()
{

    std::cout << "Enter the number of elements of array" << std::endl;
    std::cin >> n;
    int arr[n];
    std::cout << "Enter the elements" << std::endl;
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
    sort(arr);
    int k;
    std::cout<<"Enter the element to insert"<<std::endl;
    std::cin>>k;
    if(k>=arr[1])
    {
        std::cout<<"0"<<std::endl;
    }
    else{

    }
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i];
    }

    return 0;
}