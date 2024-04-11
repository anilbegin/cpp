// revise Binary Search 
// Find X from a given array of numbers.

#include<iostream>
using namespace std;

int binary_search(int arr[], int size, int find) {
  int start = 0; 
  int end = size - 1;

//  int mid = (start + end)/2; 
    int mid = start + (end - start)/2; 
    // alternative formula to avoid an issue when start and 
    // end will be 2^31 - 1, and the addition will cause a 
    // resultant value of which will be not able to store in INT.

  while(start <= end) {
    if(arr[mid] == find) {
      return mid;
    }

    if(arr[mid] < find) {
      start = mid + 1;
    } else {
      end = mid - 1;
    }
  //  mid = (start + end)/2;
    mid = start + (end - start)/2; 
  }
  return -1;
}

int main() {
  int arr_even[] = {2, 6, 9, 12, 23, 34, 45, 56};
  int arr_odd[] = {1, 5, 7, 9, 11, 13, 17};

  int size = sizeof(arr_odd)/sizeof(arr_odd[0]);

  int find = 11;

  int ans = binary_search(arr_odd, size, find);

  cout<<"The value of "<<find<<" is on index: "<<ans;
}
