#include<iostream>
using namespace std;

int main(){
  int q = 5;
  int prev = 1;
  int prev2 = 0;
  int curr;
  for(int i=2;i<=q;i++){
    curr = prev+prev2;
    prev2 = prev;
    prev = curr;
  }
  cout<<prev<<endl;
}
