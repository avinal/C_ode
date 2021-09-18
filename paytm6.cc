/**
 * @file paytm6.cc
 * @author Avinal Kumar <avinal.xlvii@gmail.com>
 * @since August 13, 2021
 *
 * insertion sort
 */

#include <iostream>
#include<vector>
void insertion_sort()

#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct node{
  int data;
  node *left, *right;

};



bool findpath(node * root, int a, vector<int>& arr){
  if(root){
    return findpath(root->left, a, arr);
    arr.push_back(root->data);
    if(root->data == a){
      return true;
    }
    return findpath(root->right, a, arr);
  }
  return false;
}

void findMaxLen(node* root, vector<int> , int a, int b){
vector<int> patha, pathb;
findpath(root, a, patha);
findpath(root, b, pathb);
int index;
for(int i=1; i<patha.size(); i++){
  if(search(pathb, patha[i]))
  {
    index = search(pathb, patha[i]);
    break;
  }

}

unordered_set<string> palins;

bool isPalin(string str){
  if(str.length()==1){
    return true;
  }
  return isPlain(str.substring(1, str.len()-2));
}

int findPalins(string str){
  int count=0;
  int len = str.length();
  for(int i=0; i<len, i++){
    if(int j=0; j<len; j++){
      if(i!=j && i<j){
        if(idPalin(str.substr(i,j))){

        }
        
      }
    }
  }
}
len = 1 to n
i,j str[i] == str[j] and isPalin[i+1][j-1]

i and i+n-1
i+1 - i+n-2 palindrome

}

class child : public parent1, protected parent 2{

}

int main() {
  std::cout << "Hello World!\n";
}