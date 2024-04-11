// revise Selection sort

#include<iostream>
using namespace std;

void selection_sort(int arr[], int n) {

  for(int i = 0; i < n - 1; i++) {
    int minindex = i;
    for(int j = i + 1; j < n; j++) {
      if(arr[j] < arr[minindex]) minindex = j;
    }
    swap(arr[minindex], arr[i]);
  }
}

int main() {
  int arr[] = {109, 12, 34, 1, 9, 0, 13};

  int size = sizeof(arr)/sizeof(arr[0]);

  selection_sort(arr, size);

  for(int i = 0; i < size; i++) {
    cout<<arr[i]<<" ";
  }
}