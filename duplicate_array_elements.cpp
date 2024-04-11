// find duplicate elements in an array
#include<iostream>
using namespace std;

void duplicate_elem(int arr[], int size) {

  for(int i = 0; i<size; i++) {
    int count = 0;
    for(int j = 0; j<size; j++) {
      if(arr[j] == arr[i]) count++;
    }
    if(count > 1) cout<<arr[i]<<" ";
  }
}

int main() {
  int arr[10] = {1, 2, 2, 3, 3, 3, 5, 6, 6, 7};

  cout<<"The duplicate elements in the array are: ";

  duplicate_elem(arr, 10);
}