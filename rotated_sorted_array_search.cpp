// Search and find if a particular value..
// .. exists in a rotated sorted array

int find_pivot_index(int arr[], int size) {
  int start = 0;
  int end = size - 1;

  int mid = start + (end - start)/2;

  while(start<end) {
    if(arr[mid] >= arr[start]) {
      start = mid + 1;
    } else {
      end = mid;
    }
    mid = start + (end - start)/2;
  }
  return start;
}

int binary_search(int arr[], int starting, int ending, int find) {
  int start = starting;
  int end = ending;
  int mid = start + (end - start)/2;

  while(start<=end) {
    if(arr[mid] == find) {
      return mid;
    } else if(arr[mid] < find) {
      start = mid + 1;
    } else {
      end = mid - 1;
    }
    mid = start + (end - start)/2;
  }
  return -1;
}

int find_value(int arr[], int size, int find) {
  
  int pivot = find_pivot_index(arr, size);
   
  if(find >= arr[pivot] && find <= arr[size -1]) {
    return binary_search(arr, pivot, size -1, find);
  } else {
    return binary_search(arr, 0, pivot -1, find);
  }
}

#include<iostream>
using namespace std;

int main() {
  int arr[] = {7, 8, 9, 1, 2, 3, 4};
  int find = 3;
  int size = sizeof(arr)/sizeof(arr[0]);

 // int pivot = find_pivot_index(arr, size);
  // cout<<pivot;
  int value = find_value(arr, size, find);
  cout<<value;
}