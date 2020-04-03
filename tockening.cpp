#include <iostream>
#include <vector>
#include <sstream>
#include <map>

std::pair<int,int> getvalk()
{
    int a,b;
    std::cin>>a>>b;
    return std::make_pair(a,b);
}

int main()
{
    std::pair<int,int> geter;
    geter=getvalk();
    int x,y;
    x=geter.first,y=geter.second;
    std::cout<<x<<"\u2082"<<y;
    system("pause");
    return 0;

}