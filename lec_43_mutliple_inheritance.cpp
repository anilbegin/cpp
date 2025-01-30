// Multiple Inheritance

#include<iostream>
using namespace std;

class Human {
  public:
    void speak() {
      cout<<"this may be a human";
    }
};

class Computer {
  public: 
    void audio() {
      cout<<"this is a computer";
    }
};
// Multiple Inheritance
class Android: public Human, public Computer {
  public:
};

int main() {
  Android aone;

  aone.speak();
  cout<<endl;
  aone.audio();
}

