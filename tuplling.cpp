#include<bits/stdc++.h>


std::tuple<int, std::string, float> myFun(int x, std::string yi, float z) {
    return std::make_tuple(x, yi, z);
}
int main() {
    int a;
    std::string b;
    float c;
    std::tie(a, b, c) = myFun(78, "tyu", 89);
    std::cout << a << b   << c << std::endl;
    std::cout << "ypou";
    return 0;
}