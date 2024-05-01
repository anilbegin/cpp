// pointers in c++

#include<iostream>
using namespace std;

int main() {
  int num = 5;
  int *ptr = &num;

  cout<<"memory address of num: "<<&num;
  // this address thats displayed in OP.. 
  // is going to be saved by a Pointer.

  cout<<"\nvalue saved in num: "<<num<<endl;

  cout<<"*ptr - output: "<<*ptr<<endl;
  // ptr pe jo address pada hai uski value bata do
}
