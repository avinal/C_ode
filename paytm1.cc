/**
 * @file paytm1.cc
 * @author Avinal Kumar <avinal.xlvii@gmail.com>
 * @since August 12, 2021
 *
 * A recursive function to print all element of an array
 */

#include <iostream>

void printArray(int arr[], int length) {
  if (--length >= 0) {
    std::cout << arr[length] << " ";
    return printArray(arr, length);
  } else {
    return;
  }
}

int main() {
  int arr[]{1, 2, 3, 4, 5, 6, 7, 8};
  printArray(arr, 8);
  return 0;
}