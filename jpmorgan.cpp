#include <iostream>
#include <string>
#include<sstream>
using namespace std;

int main() {
  string number;
  cin>>number;
  int len=number.length();
  int decod=0;
  bool all=true;
  for(int i=0; i<len; i++){
    int val=number[i]-'0';
    if(val==0){
      all=false;
    }
  }
  if(all){
    decod++;
  }
  for(int j=0; j<len-1; j++){
    stringstream num(number.substr(j, 2));
    int val=0;
    num>>val;
    if(val<=26 && val>=10){
      decod++;
    }
  }
  cout<<decod<<endl;
}