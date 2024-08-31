// why to use reference variable ? lec:28 - 7:30

#include<iostream>
using std::cout;
using std::cin;
using std::endl;

void a_update(int j) {
  j++;
//  cout<<endl<<"a_update-j: "<<j;  //  11
}

void b_update(int& k) {
  k++;
}

int main() {
  int i = 10;
  
  a_update(i);
  cout<<endl<<"i: "<<i;     // 10

  b_update(i);
  cout<<endl<<"i: "<<i;     // 11
 }