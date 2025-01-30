// inheritance
// accessing data member, when mode of inheritance is 'public'
// but data member in base class is declared as protected

#include<iostream>
using std::cout;
using std::cin;
using std::endl;

class Human {
  protected:
    int height = 6; // protected
  public:
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
// base class data member is protected, 'public' is the mode of inheritance
class Man : public Human {
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
  
 // cout<<a.height; // accessible if mode of inheritance 'public'
  cout<<a.height;    // inaccessible if mode of inheritance 'public' ..
                     // ... but data member declared as protected in Base class
}   