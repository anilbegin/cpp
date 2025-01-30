// Polymorphism
// run time polymorphism (dynamic polymorphism)
// Method overriding

#include<iostream>
using namespace std;

class SampleA {
  public:
    int a = 0;
    
  public:
    void speak() {
      cout<<"this is sampleA"<<endl;
    }    
   
};
class SampleB : public SampleA {
  public:
    int b = 0;
  public:
    void speak() {
      cout<<"this is sampleB"<<endl;
    }
};
class SampleC : public SampleA {
  public:
    void speak() {
      cout<<"this is sampleC"<<endl;
    }
};

int main() {
  SampleB s1;
  SampleC s2;

  s1.speak(); // this is sampleB
  s2.speak(); // this is sampleC
  // functions of their respective classes..
  // overrided the parent class function
}

