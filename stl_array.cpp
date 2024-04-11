// STL array and normal array

#include<iostream>
#include<array>
using namespace std;

int main() {
  int basic[3] = {1, 2, 3};

  array<int, 4> x = {1, 2, 3, 4}; // STL way of array declaration

//  cout<<basic.size(); // throws arrow for normal array declaration
  cout<<x.size(); // gives OP as '4'
}