// copy constructor
// shallow and deep copy example

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
    char *name;

    Hero() {
      cout<<endl<<"simple constructor called: "<<endl;
      name = new char[100]; // dynamically allocated in heap
    }
    void setName(char name[]) {
      strcpy(this->name, name); // strcpy func needs string.h to run
    }
    void setHealth(int health) {
      this->health = health;
    }
    void setLevel(char level) {
      this->level = level;
    }

    //  Hero(Hero& temp) {
    //    cout<<"Customized copy constructo called: ";
    //    this->health = temp.health;
    //    this->level = temp.level;
    //  }
    void print() {
      cout<<endl<<"health: "<<this->name<<" ,";
      cout<<"health: "<<this->health<<", ";
      cout<<"level: "<<this->level;
    }  
};

int main() {
  Hero hero1;
  hero1.setHealth(12);
  hero1.setLevel('D');
  
  char name[7] = "Babbar";
  hero1.setName(name);
  hero1.print();  // Babbar
  
  // use default copy constructor
  Hero hero2(hero1);
  hero2.print();  // Babbar
  // Hero hero2 = hero1;
  hero1.name[0] = 'G';
  hero1.setHealth(14);
  // above setHealth does not change value of hero2
  hero1.print();  // Gabbar // health 14
  
  hero2.print();  // Gabbar // health 12
  // here also its Gabbar, because 'name' is declared as pointer
}
