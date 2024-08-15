// char pointers

#include<iostream>
using namespace std;

int main() {
  int arr[5] = {1, 2, 3, 4, 5};
  char ch[6] = "abcde";

  cout<<endl<<"arr: "<<arr; // 0x61fefc (addr of arr[0])
  cout<<endl<<"ch: "<<ch; // abcde
  // cout implementation for 'char' is different from 'int'
  cout<<endl<<"ch[0]: "<<ch[0]; // a
  cout<<endl<<"ch[1]: "<<ch[1]; // b
  
  char *c = ch; 
  cout<<endl<<"*c: "<<*c; // a

  char *ct = &ch[0]; 
  cout<<endl<<"*ct: "<<*ct; // a
  cout<<endl<<"ct: "<<ct; // abcde
}
