// static keyword

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
   static int timeToComplete;

  Hero() {
    cout<<endl<<"default contructor called: "<<endl;
    name = new char[100];
  }

  Hero(int health, char level) {
    cout<<endl<<"parameterized constructor called: ";
    this->health = health;
    this->level = level;
  }

 // destructor
  ~Hero() {
    cout<<endl<<"destructor bhai called"<<endl;
  }
};

int Hero::timeToComplete = 5;
// datatype className :: fieldName = value;

int main() {
 // access static data member value
 // does not need to create an Object
 cout<<Hero::timeToComplete;

 Hero a;
 cout<<a.timeToComplete; // not recommended
 // this is not recommended because..
 // static member belongs to class Hero
}
