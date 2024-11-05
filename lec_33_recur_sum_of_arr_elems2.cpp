// recursion revise
// sum of elements in an array
// Soln by Codehelp 


#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int sum_of(int arr[], int n) {
  if(n==0) return 0;

  if(n==1) return arr[0];

  return arr[0] + sum_of(arr+1, n-1);
}

int main() {
  int arr[] = {0, 1, 2, 7};
  int n = 4;

  int ans = sum_of(arr, n);

  cout<<ans;
}

