// pointers demo
// size of Pointer should have been shown '8' in any case, but here always giving 4.
// REASON: compiler version is 32bit, so sizeof(ptr) = 4.
// check gcc -v , to know if gcc comiler is 32bit or 64bit
// if compiler version owuld have been 64bits, then sizeof(ptr) = 8

#include<iostream>
using namespace std;

int main() {
  int val = 10;
  int *ptr = &val;
  double d = 4.7;
  double *dptr = &d;
  char ch = 'a';
  char *cptr = &ch;

  cout<<"value: "<<val<<endl; // 10
  cout<<"value: "<<*ptr<<endl; // 10
   cout<<"size of val: "<<sizeof(val)<<endl; // OP is 4
  cout<<"size of - ptr: "<<sizeof(ptr)<<endl; 
  cout<<"memory address of val: "<<ptr<<endl; // 0x61ff00
  cout<<"memory address of val: "<<&val<<endl; // 0x61ff00
  cout<<"size of pointer - ptr: "<<sizeof(ptr)<<endl; // should show 8,but is showing 4 instead !!

  //val++;
  //ptr++;
  cout<<endl<<"value d(double): "<<d<<endl; // 10
  cout<<"value d: *dptr: "<<*dptr<<endl; // 10
  cout<<"value of &d: "<<&d<<endl; // 0x61fef8
  cout<<"value of dptr: "<<dptr<<endl;  // 0x61fef8
  cout<<"size of variable - d: "<<sizeof(d)<<endl;  // 8
  cout<<"size of - dptr: "<<sizeof(dptr)<<endl; // Wrng OP : 4, right OP is 8 ??

  cout<<endl<<"value in variable ch(char): "<<ch<<endl; // OP is a
  cout<<"address of ch: cptr: "<<cptr<<endl; // wrong OP: a═╠╠╠╠╠↕@ - wierd symbols
  cout<<"value shown for: *cptr: "<<*cptr<<endl; // OP is a
  cout<<"sizeof cptr "<<sizeof(ptr)<<endl; // wrong OP: 4, should show 8
   
}