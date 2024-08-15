// play with pointers

#include<iostream>
using namespace std;

int main() {
  int arr[10] = {2, 5, 6, 10};
  int *p = arr;
  cout<<"the address of arr[0]: "<<arr; // 0x61fed8
  cout<<endl<<"the *p: "<<*p;
  cout<<endl<<"sizeof(arr): "<<sizeof(arr); // 40
  cout<<endl<<"sizeof(p): "<<sizeof(p);  // sizeof address block 4
  cout<<endl<<"sizeof(*p): "<<sizeof(*p); // sizeof value in that address
  cout<<endl<<"sizeof(&p): "<<sizeof(&p); // sizeof address of p
}
