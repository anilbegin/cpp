// array pointers 

#include<iostream>
using namespace std;

int main() {
 int arr[10];

 cout<<"address of first memory block of arr[10] is: "<<arr;
 // OP: address of first memory block of arr[10] is: 0x61fee8
 cout<<endl<<"&arr shows: "<<&arr; // OP same as arr
 cout<<endl<<"&arr[0] shows: "<<&arr[0]; // address of first block in array
 cout<<endl<<"&arr[1] shows: "<<&arr[1]; // address of second block in array
}