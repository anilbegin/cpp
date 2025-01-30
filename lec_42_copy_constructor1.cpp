// copy constructor demo

#include<iostream>
using namespace std;

class Hero {
  private:
    int health;
    char level;
  public:
    // parameterized  constructor
    Hero(int health, char level) {
      cout<<"parameterized constructor called"<<endl;
      this->health = health;
      this->level = level;
    }
    
    void print() {
      cout<<"health: "<<this->health<<endl;
      cout<<"level: "<<this->level<<endl;
    }
   

};

int main() {
  Hero suresh(10, 'b');
  suresh.print();

  // a basic copy constructor
  Hero ritesh(suresh);  

  ritesh.print();
}
