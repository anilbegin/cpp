// Dynamic allocation of an Object instance

#include<iostream>
using namespace std;

class Hero {
  private:
    int level = 1;
    char stage = 'a';
  public:
    int health = 10;

    int getLevel() {
      return level;
    }
    char getStage() {
      return stage;
    }
    void setLevel(int lev) {
      level = lev;
    }

};

int main() {
  
  Hero ramesh;

  cout<<"level is: "<<ramesh.getLevel()<<endl;
  cout<<"stage is: "<<ramesh.getStage()<<endl;
  cout<<endl;

  // dynamic allocation
  Hero *b = new Hero;
  (*b).setLevel(3); // '*' is called the dereference operator
  //cout<<"level is: "<<(*b).getLevel()<<endl;
  //cout<<"stage is: "<<(*b).getStage()<<endl;
  // we cannot use 'b' instead of '*b', because 'b'
  // here represents the address.

  //alternative implementation
  b->setLevel(4);
  cout<<"level is: "<<b->getLevel()<<endl;
  cout<<"stage is: "<<b->getStage()<<endl;
}
