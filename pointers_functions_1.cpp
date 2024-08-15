#include<iostream>
using namespace std;

void value_print(int *p) {
  cout<<endl<<"*p: "<<*p; // 5
  cout<<endl<<"p: "<<p;   // 0x61ff18
}

void update_print(int *p) {
  p = p + 1;

  cout<<endl<<"(inside function)after-update: "<<p; // 0x61ff0c
}

void update_value(int *p) {
  *p = *p + 1;
}


int main() {
 int value = 5;
 int *p = &value;

// value_print(p);

  cout<<endl<<"before-update: "<<p; // 0x61ff08
  update_print(p);
  cout<<endl<<"after-update: "<<p;  // 0x61ff08
  cout<<endl<<"before-update *p: "<<*p; // 5
  update_value(p);
  cout<<endl<<"after-update *p: "<<*p;  // 6
}
