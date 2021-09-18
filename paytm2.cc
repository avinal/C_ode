/**
 * @file paytm2.cc
 * @author Avinal Kumar <avinal.xlvii@gmail.com>
 * @since August 12, 2021
 *
 * given two unsorted linkedlist merge them in sorted order
 */

#include <iostream>

struct node {
  int data;
  node *next;
  node() {}
  node(int _data, node *_next) : data(_data), next(_next) {}
};

node *merge_sorted(node *listA, node *listB) {
  node *res = new node();

  while (listA || listB) {
    if (listA && listB) {
      if (listA->data < listB->data) {
        res = new node(listA->data, nullptr);
        res = res->next;
        listA = listA->next;
      } else {
        res = new node(listB->data, nullptr);
        res = res->next;
        listB = listB->next;
      }
    } else if (listA) {
      res = new node(listA->data, nullptr);
      res = res->next;
      listA = listA->next;
    } else if (listB) {
      res = new node(listB->data, nullptr);
      res = res->next;
      listB = listB->next;
    }
  }
  return res;
}

int main(){
    return 0;
}