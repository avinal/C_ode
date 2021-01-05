#include <iostream>   // std::cout
#include <vector> 
#include <unordered_map>
#include<algorithm>    // std::string, std::stoi
using namespace std;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    vector<int> cumsum;
    int sum=0;
    for(int k: A){
        sum+=k;
        cumsum.push_back(sum);
    }
    unordered_map<int, int> storesum;
    for(int j: cumsum){
        if(storesum.find(j)!=storesum.end()){
            storesum[j]+=1;
        }else{
            storesum.insert({j,1});
        }
    }
    sum=0;
    for_each(storesum.begin(),storesum.end(), [&](auto par)
    {
        sum+=(par.second*(par.second-1)/2);
    });
    
    return sum;
}

int main ()
{
    vector<int> v{2, -2, 3, 0, 4, -7};
    cout<<solution(v);
}