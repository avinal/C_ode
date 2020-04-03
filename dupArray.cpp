#include <bits/stdc++.h>

short X, Y, Z, A;

template <class T>
void adder(short T)
{
    A += T;
}

int main()
{
    short accu, resi;
    uint8_t op;
    std::cin >> accu >> op >> resi;
    adder(op);
    std::cout << A << " " << X << " " << Y << " " << Z << std::endl;
}
