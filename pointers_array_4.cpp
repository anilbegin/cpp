// play with pointers

#include<iostream>
using namespace std;

int main() {
  int a[10] = {1, 2, 3};

  cout<<endl<<"&a: "<<&a;       // 0x61fee8
  cout<<endl<<"a: "<<a;         // 0x61fee8
  cout<<endl<<"&a[0]: "<<&a[0]; // 0x61fee8
}
