// recursion , check if array is sorted

#include<iostream>
using std::cout;
using std::cin;
using std::endl;

bool check_sorted(int arr[], int n) {
  // base case
  // if there are no elements in array (n==0)
  // if there is only one element in array (n==1)
  if(n==0 || n==1) {
    cout<<arr[0]; // adding line to check 
    return 1;
  }

  // recursive function
  if(arr[0] > arr[1]) {
    cout<<arr[0]<<" "<<arr[1]; // adding line to check 
    return false;
  } else {
    bool ans = check_sorted(arr+1, n-1);
    return ans;
  }
}

int main() {
  int arr[] = {2, 4, 6, 9, 14, 15};
  int n = sizeof(arr)/sizeof(arr[0]);

  check_sorted(arr, n) ? cout<<endl<<"sorted array" : cout<<endl<<"unsorted array";
}
