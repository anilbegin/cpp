// recursion - binary search using recursion

#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

bool binary_search(int arr[], int start, int end, int find) {
  //base case
  if(start>end) return 0;
  
  int mid = start + (end-start)/2;

  if(arr[mid] == find) {
    cout<<mid; // just for debugging
    return 1;
  }
  if(arr[mid] < find) {
    return binary_search(arr, mid+1, end, find);
  } else {
    return binary_search(arr, start, mid - 1, find);
  }
  
}

int main() {
  int arr[] = {1, 3, 4, 9, 10, 12, 14, 16, 18};
  int n = 9;
  int end = n-1;
  int find = 10;
  binary_search(arr, 0, end, find) ? cout<<" value found" : cout<<"value does not exist";
}
