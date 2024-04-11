// check with custom function if a given number is even or odd.
#include<iostream>
using namespace std;

bool isEven(int x) {
  int chk;
/*
  if(x%2 == 0) {
    return 1;
  } else {
    return 0;
  }
*/
/*
  if(x&1) {
    return 0;
  }  else {
    return 1;
  }
*/
  if(x&1) {
    return 0;
  }
  return 1;  
}

int main() {
  int a;

  cout << "enter a number: ";
  cin >> a;

  if(isEven(a)) {
    cout << "This is an even number";
  } else {
    cout << "This is an odd number";
  }
}