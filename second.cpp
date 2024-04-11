#include<iostream>
using namespace std;

int main() {
  int a = 12;
  float b = 1.2;
  double d = 1.43;
  char ch = 'a';
  bool bl = true;

  cout << "the value of a is: " << a << endl;
  cout << "the value of b is: " << b << endl;
  cout << "the value of d is: " << d << endl;
  cout << "the value of ch is: " << ch << endl;
  cout << "the value of bl is: " << bl << endl; 
  
  int size_a = sizeof(a);
  int size_b = sizeof(b);
  int size_d = sizeof(d);
  int size_ch = sizeof(ch);
  int size_bl = sizeof(bl);
  
  cout << "the size of a is: " << size_a <<endl;
  cout << "the size of b is: " << size_b <<endl;
  cout << "the size of d is: " << size_d <<endl;
  cout << "the size of ch is: " << size_ch <<endl;
  cout << "the size of bl is: " << size_bl <<endl;
}