// access specifier
// public: can be accessed from outside the class
// private: cannot be accessed from outside the class
// protected: cannot be accessed from outside the class but..
// .. can be accessed by inherited class.

#include<iostream>
using namespace std;

class Human {
  private:
    int health = 10;
  public:
    int age = 18;
    int stage = 1;
  protected:
    char gender = 'm';   
};

class Man: public Human {
  public: 
    // int getHealth() {
    //   return this->health;
    // }
    int getAge() {
      return this->age;
    }
    int getStage() {
      return this->stage;
    }
    char getGender() {
      return this->gender;
    }
};
class Ai: private Man {
  public:
};

int main() {
  Man aone;

  cout<<aone.health;  // error: private within this context
  cout<<aone.getAge()<<endl;  // 18
  cout<<aone.getGender()<<endl;   // m

  return 0;
}