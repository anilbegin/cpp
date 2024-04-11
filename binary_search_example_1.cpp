// Binary Search Algo Application example 1
#include<iostream>
using namespace std;

int binary_Search(int arr[], int size, int find) {
  int start = 0;
  int end = size - 1;

  int mid = (start+end)/2;
  while(start<=end) {
    if(arr[mid] == find) {
      return mid;
    }

    if(arr[mid] < find) {
      start = mid + 1;
    } else {
      end = mid - 1;
    }
    mid = (start + end)/2;
    
  }
  return -1;
  
}

int main() {
  int even[6] = {2, 4, 6, 8, 12, 18};
  int odd[5] = {3, 8, 11, 14, 16};

  int find = 11;

  int ans = binary_Search(odd , 6, find); 

  cout<<"The value of "<<find<<" is in index: "<<ans; 
}

