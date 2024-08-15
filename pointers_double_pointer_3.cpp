// double pointer

#include<iostream>
using namespace std;

int main() {
  int num = 10;
  int *ptr = &num;

  int **ptr2 = &ptr;


  cout<<endl<<&ptr; // 0x61ff04
  cout<<endl<<ptr2; // 0x61ff04
}