// Inheritance ambiguity

#include<iostream>
using namespace std;


class A {
  public:
    void speak() {
      cout<<"I am class A";
    }
};
class B {
  public:
    void speak() {
      cout<<"I am class B";
    }
};

class C: public A, public B {
  public: 

};

int main() {
  C test;

//  test.speak();
  // error: request for member 'speak' is ambiguous
  test.A::speak(); // ambiguity solved
}

