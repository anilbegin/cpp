// Polymorphism
// operator overloading
// my own trial for basic operator overloading
#include<iostream>
using namespace std;

class Sample {
  public:
    int a = 0;
    
  public:
    // Operator Overloading..
    int operator -(Sample one) {
      Sample temp;
      temp.a = a * one.a;
      return temp.a;
    }
   
};

int main() {
  Sample obj1, obj2;
  obj1.a  = 3;
  obj2.a = 5;

  cout<<obj1-obj2;  // 15
}

