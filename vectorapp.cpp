#include <iostream>
#include <cstdlib>
#include <vector>

int main() {
    const int DIFF_NUM = 100;
    int totalnum;
    std::cout << "How many numbers to generate ?" << std::endl;
    std::cin >> totalnum;
    std::vector<int> numbers(DIFF_NUM + 1, 0);

    for (int i = 0; i < totalnum; i++) {
        numbers[rand() % DIFF_NUM + 1]++;
    }

    for (int j = 1; j <= DIFF_NUM; j++) {
        std::cout << j << " occours " << numbers.at(j) << "times" << std::endl;
        return 0;
    }
}