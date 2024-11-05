// recursion revise
// sum of elements in an array
// Solln found from cmments

#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int sum_of(int arr[], int n) {
  if(n==0) return 0;

  if(n!=0) return arr[n-1] + sum_of(arr, n-1);
}

int main() {
  int arr[] = {1, 3, 7, 10};
  int n = 4;

  int ans = sum_of(arr, n);

  cout<<ans;
}