#include<stdio.h>

int main(int argc, char const * argv[]) {
    int t;
    scanf("%d", &t);

    do {
        int s;
        scanf("%d", &s);
        int a[s];

        for (int i = 0; i < s; i++) {
            scanf("%d", &a[i]);
        }

        int bit = a[0];

        for (int j = 1; j < s; j++) {
            bit = bit ^ a[j];
        }

        printf("%d\n", bit);
        t--;
    } while (t > 0);

    return 0;
}
