#include<iostream>
#include<limits.h>
using namespace std;

int max_val(int arr[], int size) {
  int max_num = INT_MIN;  

  for(int i = 0; i<size; i++) {
    max_num = max(arr[i], max_num); 
  }
  return max_num;
}

int min_val(int arr[], int size) {
  int min_num = INT_MAX;  

  for(int i = 0; i<size; i++) {
    min_num = min(arr[i], min_num); 
  }
  return min_num;
}

int main() {
  int arr_size, values[100];

  cout <<"Enter the max number of values: ";
  cin >>arr_size;
  for(int i = 0; i<arr_size; i++) {
    cin >>values[i];
  }

  int max_value = max_val(values, arr_size);
  int min_value = min_val(values, arr_size);

  cout <<"Max value from the set is: "<< max_value<<endl;
  cout <<"Min value from the set is: "<< min_value<<endl;
}