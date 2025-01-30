// destructor 

#include<iostream>
using std::cout;
using std::cin;
using std::endl;

class Hero {
  private:
    int health;
    char level;
  public:
    char* name;

  Hero() {
    cout<<"default contructor called: "<<endl;
    name = new char[100];
  }

  Hero(int health, char level) {
    cout<<endl<<"parameterized constructor called: ";
    this->health = health;
    this->level = level;
  }

 // destructor
  ~Hero() {
    cout<<"destructor bhai called"<<endl;
  }
};


int main() {
 //statically created Object
 // destructor gets called automatically
 Hero a;
 
 // dynamically created Object
 // destructor needs to be called manually
 Hero *b = new Hero();

 delete b; // destructor called manually
}

