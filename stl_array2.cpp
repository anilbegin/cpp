// STL array, checking size of STL arrays
// other STL operations on array
#include<iostream>
#include<array>
using namespace std;

int main() {

  array<int, 4> x = {1, 2, 3, 4};

  int size = x.size();

  for(int i = 0; i<size; i++) {
    cout<<x[i]<<" ";
  }

  cout<<endl;

  cout<<"Element at 2nd index "<<x.at(2)<<endl; // Element at 2nd index 3
  cout<<"Empty or not "<<x.empty()<<endl; // Empty or not 0 // returns a Boolean value

  cout<<"First element "<<x.front()<<endl; // 1
  cout<<"Last Element "<<x.back(); // 4
}