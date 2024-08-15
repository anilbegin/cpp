// MCQ

#include<iostream>
using namespace std;

int main() {
  int *p = 0; // null pointer
  int first = 110;
  *p = first;

  cout<<*p; // error: either no OP, or segmentation fault error.

}

