// polymorphism
// function overloading

#include<iostream>
using namespace std;

class A {
  public:
    void speak() {
      cout<<"hello mister jill";
    }
    int speak() { // function only with a different return type wont work
      cout<<"Hello trial";
      return 1;
    }
    void speak(string name) {
      cout<<endl<<"hello mister "<<name;
    }
};

int main() {
  A aone;

  aone.speak();  // error:
 // aone.speak("jack"); // hello mister jack
}
