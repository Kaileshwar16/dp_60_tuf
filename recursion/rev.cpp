#include<iostream>
#include<algorithm>
using namespace std;
void rev(int arr[],int l,int r){
  if(l < r){
    swap(arr[l],arr[r]);
    rev(arr,l+1,r-1);
  }
}
int main(){
  int arr[] = {1,2,3,4,5};
  int n = sizeof(arr)/sizeof(arr[0]);
  int l = 0;
  int r = n-1;
  rev(arr,l,r);

  for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
  }
}
