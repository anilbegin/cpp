// how create - reference vairable - basic example

#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
  int i = 100;
  int& j = i;

  cout<<endl<<"i: "<<i;   // 100
  j++;
  cout<<endl<<"i: "<<i;   // 101
  cout<<endl<<"&i: "<<&i;   // 0x61ff08
  cout<<endl<<"&j: "<<&j;   // 0x61ff08
  
}