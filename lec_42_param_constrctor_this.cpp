// parameterized constructor, use of this keyword
// this keyword points to the current object
//.. and stores the address of the current object

#include<iostream>
using namespace std;

class Hero {
  private:
    int health;
  public:
    
    // parameterized constructor
    Hero(int health) {
      this->health = health; // using 'this' keyword
      cout<<this; // 0x61ff0c
    }
    int getHealth() {
      return health;
    }

};

int main() {
  Hero ramesh(10); // need a value as parameter

  cout<< "\naddress of ramesh: " << &ramesh << endl; //0x61ff0c

  // dynamic allocation
  Hero *b = new Hero(20);
  cout<<endl;
  cout<<b;
}
