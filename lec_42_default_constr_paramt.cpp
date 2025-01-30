// sample code demo default constructor, parameterized constructor

#include<iostream>
using namespace std;

class Hero {
  private:
    int health;
    int level;
  public:
    // default constructor
    Hero() {
      cout<<"default constructor called";
    }

    Hero(int health) {
      cout<<"\nparameterized constructor called"<<endl;
      cout<<this<<endl;
      this->health = health;
    }
    void setLevel(int lev) {
      level = lev;
    }
    int getLevel() {
      return level;
    }   
    int getHealth() {
      return health;
    }  

};

int main() {
  Hero ramesh;

  Hero suresh(10);
}