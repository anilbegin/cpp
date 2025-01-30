// constructor

#include<iostream>
using namespace std;

class Hero {
  private:
    int level = 1;
    char stage = 'a';
  public:
    int health = 10;


    // constructor
    Hero() {
      cout<<"constructor called"<<endl;
    }

};

int main() {
  
  cout<<"hi"<<endl;
  // constructor called statically
  Hero ramesh;
    cout<<"hello"<<endl;
  // constructor called dynamically
  Hero *b = new Hero;
}
