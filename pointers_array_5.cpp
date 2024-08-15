// pointers practice

#include<iostream>
using namespace std;

int main() {
  int arr[10] = {10, 21, 32, 54};
  int *ptr = arr;
  int i = 3;

  cout<<"address of first memory block:arr: "<<arr; // 0x61fed4
  cout<<endl<<"address of first memory block:&arr[0]: "<<&arr[0]; // 0x61fed4
  cout<<endl<<"sizeof(arr): "<<sizeof(arr); // 40
  cout<<endl<<"ptr: "<<ptr; // 0x61fed4
  cout<<endl<<"*ptr: "<<*ptr; // 10
  cout<<endl<<"sizeof(ptr): "<<sizeof(ptr); // 4
  cout<<endl<<"first element of 0[arr]: "<<0[arr]; // 10
  cout<<endl<<"second element of 1[arr]: "<<1[arr]; // 21
  cout<<endl<<"first element of arr[0]: "<<arr[0]; // 10
  cout<<endl<<"second element of arr[1]: "<<arr[1]; // 21
  cout<<endl<<"*arr: "<<*arr; // 10
  cout<<endl<<"*arr+1: "<<*arr+1; // 11
  cout<<endl<<"*arr+2: "<<*arr+2; // 12 
  cout<<endl<<"*(arr+2):"<<*(arr+2);  // 32
  cout<<endl<<"*arr-1: "<<*arr-1;  // 9
  *arr+1; 
  *(arr+1);
  cout<<endl<<"*arr: "<<*arr; // 10
  cout<<endl<<"*(arr)+1: "<<*(arr)+1; // 11

  cout<<endl<<"i[arr]: "<<i[arr];  // 54
}