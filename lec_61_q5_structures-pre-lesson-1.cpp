// A brief Lesson on C++ Structures
// Structures used in Lec-61-q5-Solution

#include<iostream>
using namespace std;

// Structure definition
struct Student {
  string name;
  int roll;
  float marks;
};

int main() {
  // Declare a variable of type Student
  Student s1;

  // Assign values
  s1.name = "Alice";
  s1.roll = 101;
  s1.marks = 89.5;

  // Print values
  cout << "Name: " << s1.name << endl;
  cout << "Roll: " << s1.roll << endl;
  cout << "Marks: " << s1.marks << endl;

  return 0;
}
