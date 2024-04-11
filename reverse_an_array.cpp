// Reverse an array
#include<iostream>
using namespace std;

void reverse(int arr[], int n) {
  
  int start = 0;
  int end = n-1;
  
  while(start<=end) {
    swap(arr[start], arr[end]);
    start++;
    end--; 
  }  
  
}

void print_array(int arr[] ,int size) {

  for(int i= 0; i< size; i++) {
    cout <<arr[i] << " ";
  }
  cout <<endl;
}

int main() {
  int arr[6] = {2, 4, 6, 8, 0, 1};
  int brr[5] = {1, 9, 4, 3, 2};

  reverse(arr, 6);
  reverse(brr, 5);
   
  print_array(arr, 6);
  print_array(brr, 5);
  
}

