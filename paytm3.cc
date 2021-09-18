/**
 * @file paytm3.cc
 * @author Avinal Kumar <avinal.xlvii@gmail.com>
 * @since August 12, 2021
 *
 * Given a tree find if it is a BST
 */

struct node {
  int data;
  node *left;
  node *right;
  node() {}
  node(int _data, node *_left, node *_right)
      : data(_data), left(_left), right(_right) {}
};

// check if the every left node is less than next node in inorder traversal.
// Inorder traversal prints in sorted order
bool isBST(node *root, int &prev) {
  if (root) {
    if (!isBST(root->left, prev))
      return false;

    if (root->data <= prev)
      return false;

    prev = root->data;

    return isBST(root->right, prev);
  }
  return true;
}

int main() { return 0; }