// Selection Sort algo
// each round places the minimum element in its correct position


#include<iostream>
using namespace std;

void selection_sort(int arr[],int n) {
  for(int i = 0; i< n - 1; i++) {
    int minindex = i;

    for(int j = i + 1; j<n; j++) {
      if(arr[j] < arr[minindex]) {
        minindex = j;
      }
    }
    swap(arr[minindex], arr[i]);
  }
  
}

int main() {
  int arr[] = {1, 7, 9, 2, 3, 0};
  // int arr[] = {1, 41, 31, 21, 11, 9, 8};
  //int arr[] = {6, 2, 8, 4, 10};
  //int arr[] = {29, 92, 98, 13, 87, 66, 52, 51, 36};
  
  int size = sizeof(arr)/sizeof(arr[0]);
 
  selection_sort(arr, size);

  cout<<"Sorted array: "; 
  for(int i = 0; i<size; i++) {
    cout<<arr[i]<<" ";
  } 

}
