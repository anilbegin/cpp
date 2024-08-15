// MCQ

#include<iostream>
using namespace std;

int main() {
  int arr[6] = {11, 12, 31};
  int *p = arr;
/* question-> */  cout<<p[2]; // 31
  cout<<endl<<p[0]; // 11
  cout<<endl<<p[1]; // 12
  cout<<endl<<p; // 0x61fef4
  cout<<endl<<*p; // 11
}

