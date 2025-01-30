// Copy Assignment Operator

#include<iostream>
#include<string.h>
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
    cout<<"default contructor called: ";
    name = new char[100];
  }

  Hero(int health, char level) {
    cout<<endl<<"parameterized constructor called: ";
    this->health = health;
    this->level = level;
  }

  void print() {
    cout<<endl<<"health: "<<this->health<<", ";
    cout<<"level: "<<this->level<<", ";
  //  cout<<"name: "<<this->name<<endl;
  }

};

int main() {
 Hero a(10, 'c');

 Hero b(20, 'b');

 a.print();
 b.print();

 a = b; // example for Copy Assignment Operator
 a.print();
 b.print();

}
