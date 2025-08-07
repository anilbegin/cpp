// C++ Structures
// An example , done by myself
// has a structure, and basic code similar to Lec-61-Q5-Circular-tour 

#include<iostream>
using namespace std;

struct Student {
  string name;
  int std;
};

class Solution {
  public:

  void print_data(Student s[], int n) {

    for(int i = 0; i<n; i++) {
      cout<<"name: "<<s[i].name<<", ";
      cout<<"class: "<<s[i].std<<", ";      
      cout<<endl<<endl;
    }
  }
};

int main() {
  string name[] = {"ajay", "vijay", "jaya", "bhanu", "sanjay"};
  int std[] = {5, 6, 7, 8, 9};
  int n = 5;

  Student stud[n];

  for(int i = 0; i<n; i++) {
    stud[i].name = name[i];
    stud[i].std = std[i];
  }
  
  Solution sol;
  sol.print_data(stud, n);
}