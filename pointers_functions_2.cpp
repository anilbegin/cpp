// pointers inside function
// demonstrates how the parameter passed to function..
// is just the address of the first memory block of the array

#include<iostream>
using namespace std;

/*
int getSum(int *arr, int n) {

  cout<<"sizeof(arr) inside getSum(): "<<sizeof(arr)<<endl;
  // 4
  int sum = 0;
  for(int i = 0; i<n; i++) {
    sum+=arr[i];
   // sum+=i[arr]; // this is same as the previous line
  }
  return sum;
}
*/

int getSum(int arr[], int n) {

  cout<<"sizeof(arr) inside getSum(): "<<sizeof(arr)<<endl;
  // 4
  int sum = 0;
  for(int i = 0; i<n; i++) {
    sum+=arr[i];
  //  sum+=i[arr];
  }
  return sum;
}


int main() {
  int arr[5] = {1, 2, 3, 4, 5};
  cout<<"sizeof(arr) inside main(): "<<sizeof(arr)<<endl;
  int n = 5;
  cout<<getSum(arr, n);
}
