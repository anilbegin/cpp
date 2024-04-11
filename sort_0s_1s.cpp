// Sort 0s and`1s with single traversal
// sort {0, 1, 1, 0, 0, 1} to output: {0, 0, 0, 1, 1, 1}
#include<iostream>
#include <vector>
using namespace std;

void printArray(int arr[], int size) {
  for(int i = 0; i < size; i++) {
    cout<<arr[i]<<" ";
  }
}

void sort_0s_1s(int arr[], int size) {
  int i = 0, j = size - 1;
 
  while(i < j) {
    if(arr[i] == 0) {
      i++;
    }
    if(arr[j] == 1) {
      j--;
    }
    if(arr[i] == 1 && arr[j] == 0) {
      swap(arr[i], arr[j]);
      i++;
      j--;
    }
  }
 
}

int main() {
//  int arr[] = {0, 1, 1, 0, 0, 1};
  int arr[] = {1, 1, 0, 0, 0, 0, 1, 0};
  int size = sizeof(arr)/sizeof(arr[0]);
  
  sort_0s_1s(arr, size);

  printArray(arr, size);
}
