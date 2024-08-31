// macro example
/*
-> Even Before the code gets compiled, all the places where you have used PI,
 it gets replaced by the value of 3.14. that’s the utility of macro.
- so that way no storage space is consumed compared to when a variable is 
being used instead of a macro.
- also the value which is defined by macro, cannot be modified 
inside the program

 */
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

#define PI 3.14

// macro
int main() { 
  int r = 5;
  //double pi = 3.14;
 
  double area = PI * r * r;
  cout<<"area is: "<<area;  
}