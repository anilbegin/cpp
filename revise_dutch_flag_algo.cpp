// sort 0s 1s 2s
// eg: {0, 2, 2, 1, 0, 1, 1, 0, 2} sort O/P
// {0, 0, 0, 1, 1, 1, 2, 2, 2}

#include<iostream>
using namespace std;

void printArray(int arr[], int size) {
  cout<<"the sorted array: "<<endl;
  for(int i = 0; i<size; i++) {
    cout<<arr[i]<<" ";
  }
}

void sort_0_1_2(int arr[], int size) {
  int low = 0, mid = 0, high = size - 1;

  while(mid <= high) {
    if(arr[mid] == 0) {
      swap(arr[mid], arr[low]);
      low++;
      mid++;
    } else if(arr[mid] == 1) {
      mid++;
    } else if(arr[mid] == 2) {
     swap(arr[mid], arr[high]);
     high--;
    }
  }
}

int main() {
  int arr[] = {0, 2, 2, 1, 0, 1, 1, 0, 2};

  int size = sizeof(arr)/sizeof(arr[0]);

  sort_0_1_2(arr, size);
  printArray(arr, size);
}