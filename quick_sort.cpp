// Quick sort algorithm code

#include<iostream>
using namespace std;

int partition(int arr[], int start, int end) {
  
  int pivot = arr[start];

  int count = 0;

  for(int i = start + 1; i<=end; i++) {
    if(arr[i] < pivot) count++;
  }

  // place pivot in the correct position
  int pivotIndex = start + count;
  swap(arr[pivotIndex], arr[start]);

  // left and tight wala part sambhal lete hai

  int i = start, j = end;

  while(i<pivotIndex && j>pivotIndex) {
    
    while(arr[i] < pivot) {
      i++;
    }
    while(arr[j] > pivot) {
      j--;
    }

    if(i<pivotIndex && j>pivotIndex) {
      swap(arr[i++], arr[j--]);
    }
  }
  return pivotIndex;
}

void quick_sort(int arr[], int start, int end) {
  if(start>=end) {
    return;
  }

  // partition
  int p = partition(arr, start, end);

  // sort left side
     quick_sort(arr, start, p-1);  

  // sort right side
     quick_sort(arr, p+1, end);
}

void print_array(int arr[], int size) {
  for(int i = 0; i<size; i++) {
    cout<<arr[i]<<" ";
  }
}

int main() {
  int arr[] = {9, 4, 4, 8, 5, 6, 2, 3, 10, 1};
  int n = 10;

  quick_sort(arr, 0, n-1);
  print_array(arr, n);
}

 