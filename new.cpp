#include <iostream>
#include <vector>
#include <algorithm>


int main()
{
    int n, m;
    std::cin >> n >> m;
    std::vector<int> groups;
    
    int num;
    for (int i = 0; i < n; i++)
    {
        std::cin >> num;
        groups.push_back(num);
    }
    std::sort(groups.begin(), groups.end(), std::greater<int>());
    std::vector<int>::iterator it;

    while (m > n)
    {
        int regrp = groups.front();
        it = groups.begin();
        groups.erase(it);
        groups.push_back(regrp / 2);
        groups.push_back(regrp / 2);
        std::sort(groups.begin(), groups.end(), std::greater<int>());
        m--;
        n++;
    }
    std::cout << groups.front() << std::endl;
    system("pause");
    return 0;
}