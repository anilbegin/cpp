// inheritance
// Child class cannot access the private data member of Base class

#include<iostream>
using std::cout;
using std::cin;
using std::endl;

class Human {
  
  public:
    int weight;
  private: 
    int height = 6; // private
    int age;  
  public:
     int getAge() {
      return this->age;
    }  
    void setWeight(int weight) {
      this->weight = weight;
    }
  
};
// base class data member is protected, 'public' is the mode of inheritance
class Man : public Human {
  public:
  int getHeight() {
    return this->height; // not accessible
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
  
 // cout<<a.height; 
  cout<<a.getHeight();   // not accessible
}   