#include<stdio.h>
int sum(int * z, int * c) {
    *z = *z + *c;
    return 0;
}
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    sum(&a, &b);
    printf("%dha\n", a);
    return 0;
}