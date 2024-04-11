// Bubble sort

#include<iostream>
using namespace std;

void bubble_sort(int arr[], int n) {

  for(int i = 1; i < n; i++) {
    // for round 1 to n-1
    bool swapped = false; 
    // adding a flag to break out of loop if the next values in array are already sorted
    for(int j = 0; j<n-i; j++) {
      // process element till n-i th index
      if(arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j+1]);
        swapped = true;
      }
    }
    if(swapped == false) break;
  }
}

int main() {
  int arr[] = {1, 5, 12, 10, 9, 0};

  int size = sizeof(arr)/sizeof(arr[0]);

  bubble_sort(arr, size);

  for(int i = 0; i<size; i++) {
    cout<<arr[i]<<" ";
  }
}
