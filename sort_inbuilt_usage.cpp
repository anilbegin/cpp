// using inbuilt c++ sort function
#include<iostream>
#include<algorithm>
using namespace std;

int main() {
  int arr[] = {5, 3, 1, 4, 2, 9, 0};
  int size = sizeof(arr)/sizeof(arr[0]); 
  // gives length of array or number of elements in the array.

  // size of the total array in bytes
  cout<<"sizeof(arr) is "<<sizeof(arr)<<endl;
  // size of one block in the array, in bytes 
  cout<<"sizeof(arr[0]) is "<<sizeof(arr[0])<<endl;

  //Sorting demo array
  sort(arr, arr + size);

  for(int i = 0; i<size; i++) {
    cout<<arr[i]<<" ";
  }
}