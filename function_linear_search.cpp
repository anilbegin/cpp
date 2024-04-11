// Linear Search in an array
#include<iostream>
using namespace std;

bool search_value(int arr[], int size, int val) {

  for(int i = 0; i<size; i++) {
    if(arr[i] == val) {
      return 1;
    }
  }
  return 0;
}

int main() {
  int array_values[10] = {1, 3, 2, 12, 34, 21, 54, 9, 0, 11};
  int s_value;

  cout <<"Enter the value you want to Search in the array: ";
  cin >> s_value;

  bool search_result = search_value(array_values, 10, s_value);

  if(search_result) {
    cout <<s_value<<" is present in the array.";
  } else {
    cout <<s_value<< " not found.";
  }
}