#include<iostream>
using namespace std;

int main() {
  int num;

  cout << "Enter a value: ";
  cin >> num;

  switch(num) {
    case 1: 
    cout << "First"<<endl;
    break;
    case 2: 
    cout << "Second" <<endl;
    break;
    case 3: 
    cout << "Third" <<endl;
    break;
    default: 
    cout << "None"<<endl;
  }
}