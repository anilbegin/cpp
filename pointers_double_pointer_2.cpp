// double pointer

#include<iostream>
using namespace std;

int main() {
  int num = 10;
  int *ptr = &num;

  int **ptr2 = &ptr;

  cout<<endl<<"&num: "<<&num;
  cout<<endl<<"*ptr2: "<<*ptr2; // addr of num that is stored in *ptr
}