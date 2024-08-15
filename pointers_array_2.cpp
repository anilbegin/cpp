// play with pointers

#include<iostream>
using namespace std;

int main() {
  int arr[10] = {2, 5, 6};

  cout<<"the address of arr[0]: "<<arr; // 0x61fed8
  cout<<endl<<"the address of arr[0]: "<<&arr[0]; // 0x61fed8
  cout<<endl<<"the address of *arr: "<<*arr; // 2
  cout<<endl<<"the address of arr[1]: "<<&arr[1]; // 0x61fedc
  cout<<endl<<"arr[4]: "<<arr[4]; // 0
  
  cout<<endl<<"*arr: "<<*arr +1; // 3
  cout<<endl<<"*arr: "<<*arr;    // 2
  cout<<endl<<"*(arr+1): "<<*(arr+1); // 5 // value at second location
  cout<<endl<<"*(1+arr): "<<*(1+arr); // 5 // value at second location
  cout<<endl<<"1[arr]: "<<1[arr]; // ** important note
  cout<<endl<<"arr[1]: "<<arr[1]; // notice any difference ??

}
