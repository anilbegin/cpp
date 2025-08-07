// C++ Structures
// Another example , done by myself
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
  Student s1[3] = {{"Garret", 10}, {"John", 9}, {"Micky", 8}};

  Solution sol;
  sol.print_data(s1, 3);

}
