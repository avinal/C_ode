/**
 * @file paytm4.cc
 * @author Avinal Kumar <avinal.xlvii@gmail.com>
 * @since August 12, 2021
 *
 * reverse a linkedlist using recursion
 */

struct node {
  int data;
  node *next;
  node() {}
  node(int _data, node *_next) : data(_data), next(_next) {}
};

node *head = nullptr;
node *reversell(node *input) {
  if (!input) {
    return nullptr;
  } else if (!input->next) {
    head = input;
    return input;
  }
  node *temp = reversell(input->next);
  temp->next = input;
  input->next = nullptr;
  return input;
}

int main() { return 0; }