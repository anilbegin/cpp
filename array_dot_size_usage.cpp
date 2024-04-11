#include<iostream>
#include<array>
#include<typeinfo>
using namespace std;

int main() {
  array<int, 5> arr{1, 2, 3, 1, 5}; 

  cout<<"The size/length of the array is: "<<arr.size()<<endl;
  cout<<"the type is: "<<typeid(arr).name();
}
