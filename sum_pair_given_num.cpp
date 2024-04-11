// check if a pair sum exists in array
// there will a number X given, you have to 
// check if there exists a pair in the array, whose sum
// is the number X.
// my Soln.
#include<iostream>
using namespace std;

void sum_pair(int arr[], int size, int x) {
  for(int i = 0; i< size; i++) {
    for(int j = i + 1 ; j<size; j++) {
      if(arr[i] + arr[j] == x) cout<<arr[i]<<" "<<arr[j]<<" ";
    }
  }
}

int main() {
  int x = 9;
  int arr[] = {3, 6, 4, 2, 1, 5, 7, 8};

  int size = sizeof(arr)/sizeof(arr[0]);

  sum_pair(arr, size, x); 
}
