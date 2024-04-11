#include<iostream>
//#include<vector>
using namespace std;

int main() {
  int arr[] = {1, 2, 2, 1, 7, 4, 4};

  int size = sizeof(arr)/sizeof(arr[0]);

  int ans = 0;
  for(int i = 0; i <size; i++) {
    ans = ans ^ arr[i]; 
  }
  cout<<ans;
}