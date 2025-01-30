// Polymorphism
// operator overloading
// Codehelp example - print "main bracket hu" and value of 'a'
#include<iostream>
using namespace std;

class Sample {
  public:
    int a = 0;
    
  public:
    // Operator Overloading..
    void operator ()() {
      cout<<"main bracket hu "<< this->a;
    }
   
};

int main() {
  Sample obj1, obj2;
  obj1.a  = 3;
  obj2.a = 5;

  obj1();  
}

