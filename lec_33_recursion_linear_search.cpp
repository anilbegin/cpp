// recursion - Linear Search using recursion
// Soln found by myself

#include<iostream>
using std::cout;
using std::cin;
using std::endl;
// Soln found by myself
int search(int arr[], int n, int val) {
  if(n==0) return 0;

  if(arr[0]==val) return 1;

  return search(arr+1, n-1, val);
}

int main() {
  int arr[] = {0, 1, 2, 7, 12, 14, 16, 18, 5, 9, 13};
  int n = 11;
  int val = 14;

  search(arr, n, val) ? cout<<"the value "<<val<<" exists" : cout<<"does not exist";
}