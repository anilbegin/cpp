// SWapping alternate values within themselves in an array
// Assume we dont have the inbuilt swap func available
#include<iostream>
using namespace std;

int* swap_alternate(int arr[], int size) {
  int temp;
  for(int i = 0; i <size; i+=2 ) {
    temp = arr[i];
    arr[i] = arr[i + 1];
    arr[i + 1] = temp; 
  }
  return arr;
}

int main() {
  int arr[6] = {1, 2, 3, 4, 5, 6};

  int n = 6;

  swap_alternate(arr, n);
  int i = 0;
  while(i<n) {
    cout<<arr[i]<<" ";
    i++;
  }
}