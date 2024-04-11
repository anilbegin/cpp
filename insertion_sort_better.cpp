// better Understood Soln for insertion Sort
// using method I refered in the comment section

#include<iostream>
using namespace std;

void insertion_sort(int arr[], int n) {

  for(int i = 1; i < n; i++) {
    int temp = arr[i];
    for(int j = i - 1; j >=0; j--) {
      if(arr[j] > temp) {
        arr[j + 1] = arr[j];
        arr[j] = temp;
      } else {
        break;
      }
    }
  }
}

int main() {
  int arr[] = {109, 200, 12, 0, 3, 1, 103, 100};

  int size = sizeof(arr)/sizeof(arr[0]);

  insertion_sort(arr, size);

  for(int i = 0; i<size; i++) {
    cout<<arr[i]<<" ";
  }
}
