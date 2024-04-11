// revise bubble sort

#include<iostream>
using namespace std;

void bubble_sort(int arr[], int n) {

  for(int i = 1; i < n; i++) {
    for(int j = 0; j < n - i; j++) {
      if(arr[j] > arr[j + 1]) swap(arr[j], arr[j + 1]);
    }
  }
}

int main() {
  int arr[] = {56, 23, 12, 39, 1, 9, 10};
  
  int size = sizeof(arr)/sizeof(arr[0]);

  bubble_sort(arr, size);

  for(int i = 0; i<size ; i++) {
    cout<<arr[i]<<" ";
  }
}