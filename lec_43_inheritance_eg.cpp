// inheritance

#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;
// parent class named Human
class Human {
  public:
    int height;
    int weight;
    int age;

  void setAge(int age) {
    this->age = age;
  }

  int getAge() {
    return this->age;
  }
  void setWeight(int weight) {
    this->weight = weight;  
  }  
};
// child class named 'Male'
// 'public' is the mode of inheritance
class Male: public Human {
  public:
    string color;

  void sleep() {
    cout<<"Man is sleeping";
  }
  void print() {
    cout<<endl<<"weight is: "<<this->weight;
  }
};

int main() {
  Male john;
  john.setWeight(69);
  john.sleep();
  john.print();

  cout<<endl;
  cout<<john.weight;

  return 0;
}
