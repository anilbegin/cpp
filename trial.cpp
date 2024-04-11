#include<iostream>
using namespace std;

int main() {
  int arr[] = {1, 1, 2, 3, 4};
  int ans = 0;
  for(int i = 1; i<5; i++) {
    ans= ans^i;
  }
   

  cout<<ans;
}

/*
for(int i = 0; i<5; i++) {
    ans = ans^arr[i];
  }
*/