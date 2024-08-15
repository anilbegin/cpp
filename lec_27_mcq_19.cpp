// MCQ

#include<iostream>
using namespace std;

void fun(int arr[]) {
  cout<<arr[0]; // 12
}

int main() {
  int arr[] = {11, 12, 13, 14};
  fun(arr+1);
  cout<<arr[0]; // 11
  // OP: 12 11
}