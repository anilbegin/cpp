// pointers demo - 5

#include<iostream>
using namespace std;

int main() {

  int i = 5;
  int *t = &i;


  cout<<endl<<"value of i: "<<i; //value of i: 5
  cout<<endl<<"value of &i: "<<&i; //value of &i: 0x61ff08
  cout<<endl<<"value of t: "<<t; //value of t: 0x61ff08
  cout<<endl<<"value of *t: "<<*t; //value of *t: 5
  (*t)++;
  cout<<endl<<"value of *t after doing (*t)++: "<<*t; //value of *t after doing (*t)++: 6
  cout<<endl<<"value of i now: "<<i; //value of i now: 6

  cout<<endl<<"before: value of t: "<<t; //before: value of t: 0x61ff08
  t++; //address of t + 4, because integer value takes space of 4 bytes
  cout<<endl<<"after: value of t: "<<t; //after: value of t: 0x61ff0c
}