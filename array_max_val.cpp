#include<iostream>
#include<limits.h>
using namespace std;

int max_Value(int arr[],int size) {
  int max = INT_MIN;

  for(int i = 0; i <size;i++) {
    if(arr[i] > max) {
      max = arr[i];
    }
  }
  return max;
}

int min_Value(int arr[], int size) {
  int min = INT_MAX;

  for(int i = 0; i<size; i++) {
    if(arr[i] < min) {
      min = arr[i];
    }
  }
  return min;
}

int main() {
  int size, num[100];
  
  cout<<"Enter size of array: ";
  cin >>size;

  cout<<"enter "<<size<<" values: "<<endl;
  for(int i = 0;i<size; i++) {
    cin >>num[i];
  }

  int max_value = max_Value(num, size);
  int min_value = min_Value(num, size);
  
  cout<<"Max value from the array is:" <<max_value<<endl;
  cout<<"Min value from the array is:" <<min_value<<endl;
}
