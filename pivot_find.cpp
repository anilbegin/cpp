// find the pivot index from an array

#include<iostream>
using namespace std;

int pivot_index(int arr[], int size) {
  int start = 0, end = size -1;

  int mid = start +  (end - start)/2;

  while(start < end) {
    if(arr[mid] >= arr[0]) {
      start = mid + 1;
    } else {
      end = mid;
    }
    mid = start + (end - start)/2;
  }
  return start;
}

int main() {
  int arr[] = {5, 7, 9, 10, 1, 2};
  
  int size = sizeof(arr)/sizeof(arr[0]);  

  int ans = pivot_index(arr, size);

  cout<<"Index of Pivot is: "<<ans;
}
