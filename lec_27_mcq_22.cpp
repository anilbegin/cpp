// revise pointers question : (Lec 26, timestamp: 49:32 )

#include<iostream>
using std::cout;
using std::cin;
using std::endl;

void increment(int **p) {
  ++(**p);
}

int main() {
  int num = 110;
  int *ptr = &num;
  increment(&ptr);
  cout<<num<<endl; // 111
}