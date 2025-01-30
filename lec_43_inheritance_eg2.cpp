// inheritance
// private member of baseclass, trying to be accessed via child class..
// when the child class is inherited in public mode.. the..
// .. data member is not accessible

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
// below here, 'public' is the mode of inheritance
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
  a.setWeight(50);
  a.age; // error: 'age' declared private in Human class, 
                //  hence this will throw error
                // no accessible by class Man  
  a.print();
  a.sleep();
}