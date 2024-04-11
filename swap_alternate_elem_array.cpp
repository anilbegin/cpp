// swap alternate elements of an array
#include<iostream>
using namespace std;

void swap_alternate(int arr[], int size) {

  int start = 0;
  
  while(start < size - 1) {
    swap(arr[start], arr[start+1]);
    start+=2;
    
  }
}

void print_array(int arr[], int size) {
  for(int i = 0; i<size; i++) {
    cout<< arr[i] << " ";
  }
  cout<<endl;
}

int main() {
  int arr[6] = {1, 2, 3, 4, 5, 6};
  int brr[6] = {6, 5, 4, 3, 2, 1};
  // check odd number of array size
  int crr[7] = {6, 5, 4, 3, 2, 1, 9};
  int drr[9] = {6, 5, 4, 3, 2, 1, 9, 11, 16};

  swap_alternate(arr, 6);  
  swap_alternate(brr, 6);
  swap_alternate(crr, 7);    
  swap_alternate(drr, 9);  
 
  print_array(arr, 6);
  print_array(brr, 6);
  print_array(crr, 7);
  print_array(drr, 9);
}

