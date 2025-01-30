// inheritance
// accessing data member, when mode of inheritance is 'protected'

#include<iostream>
using std::cout;
using std::cin;
using std::endl;

class Human {
  public:
    int height = 6;
    int weight;
  private: 
    int age;  
  public:
    int getAge() {
      return this->age;
    }  
    void setWeight(int weight) {
      this->weight = weight;
    }
  
};
// below here, 'protected' is the mode of inheritance
class Man : protected Human {
  public:
  int getHeight() {
    return this->height;
  }
  void sleep() {
    cout<<"this person is sleeping"<<endl;
  }
  void print() {
    cout<<"weight is: "<<this->weight<<weight;
  }
};

int main() {
  Man a;
//  cout<<a.height; // not accessible when mode of inheritance is 'protected'
                  // accessible when mode of inheritance is 'public'
  cout<<a.getHeight(); // protected member cannot be directly accessed outside the class
                // accessed by making a function named getHeight()
}   