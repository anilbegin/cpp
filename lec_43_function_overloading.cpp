// Polymorphism
// function overloading

#include<iostream>
using namespace std;

class A {
  public:
    void speak() {
      cout<<"hello mister jill";
    }
    // void speak() {
    //   cout<<"Hello this is mister jack";
    // } 
    // another function with same name throws error..
    // .. cannot be overloaded
    /*Solution: add function with an argument*/
    void speak(string name) {
      cout<<"hello mister "<<name<<endl;  
    }
    // another way of function overloading..
    // ..is by providing default value for arguments
    int add(int w, int x, int y = 0, int z = 0) {
      return (w+x+y+z);
    }
};

int main() {
  A aone;

 // aone.speak();  // error:
  /*after adding func with same name, but with an argument*/
  aone.speak(); // hello mister jill
  aone.speak("johny"); // hello mister johny
  cout<<aone.add(1, 2); // 3
  cout<<aone.add(1, 2, 3); // 6
  cout<<aone.add(1, 2, 3, 4); // 10
}

