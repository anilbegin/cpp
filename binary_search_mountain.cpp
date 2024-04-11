// applying Binary Search for a Mountain array
// finding Peak index of a mountain array

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
  int arr[] = {3, 4, 5, 1};

  int size = sizeof(arr)/sizeof(arr[0]);

  int peak_index = find_peak(arr, size);

  cout<<peak_index;
}
