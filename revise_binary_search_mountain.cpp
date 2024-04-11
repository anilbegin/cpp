// revise apply Binary search for finding Peak..
// .. in a mountain array

#include<iostream>
using namespace std;

int find_peak(int arr[], int size) {
  int start = 0;
  int end = size - 1;

  int mid = start + (end - start)/2;

  while(start<end) {
    if(arr[mid] < arr[mid + 1]) {
      start = mid + 1;
    } else {
      end = mid;
    }
    mid = start + (end - start)/2;
  }
  return start;
}

int main() {
  int arr[] = {0, 1, 6, 5, 4, 3, 0};
  int size = sizeof(arr)/sizeof(arr[0]);

  int ans = find_peak(arr, size);

  cout<<"The peak index in the array is at: "<<ans;
}