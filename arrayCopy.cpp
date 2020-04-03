#include <iostream>

union copier {
    char str[50];
    int arr[50];
};

int main() {
    copier data, data_c;
    int option;
    std::cout << "What you want to copy?\n1. String\n2. Integer Array" << std::endl;
    std::cin >> option;

    switch (option) {
        case 1:
            std::cin >> data.str;
            char * ptr1;
            char * ptr2;
            ptr1 = data.str;
            ptr2 = data_c.str;

            while (*ptr1 != '\0') {
                *ptr2 = *ptr1;
                ptr1++;
                ptr2++;
            }

            std::cout << "Copied string is " << data_c.str << std::endl;
            break;

        case 2:
            std::cout << "Type zero to terminate" << std::endl;
            int i = 0;

            while (data.arr[i - 1] != 0) {
                std::cin >> data.arr[i];
                i++;
            }

            int * ptr3 = data.arr;
            int * ptr4 = data_c.arr;

            do {
                *ptr4 = *ptr3;
                ptr3++;
                ptr4++;
            } while (*ptr3 != 0);

            std::cout << "Copied array is " << std::endl;

            while (--i) {
                std::cout << data_c.arr[i] << std::endl;
            }

            break;
    }

    return 0;
}