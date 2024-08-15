// MCQ

#include<iostream>
using namespace std;

int main() {
  float f = 12.5;
  float p = 21.5;
  float* ptr = &f; // 12.5
  (*ptr)++; // 13.5
  *ptr = p; // *ptr = 21.5
  // so whatever ptr is pointing to, its value will be changed to 21.5
  cout<< *ptr << " " << f << " " << p; // 21.5 21.5 21.5
}

