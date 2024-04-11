#include<iostream>
using namespace std;

/*
int main() {
  string str;

  cout<<"What is your name? \n";
  getline(cin, str);
  cout<<"Output: "<<str;
}
// OP: my name is earth
*/
/*
int main() {
  string str;

  cout<<"What is your name? \n";
  getline(cin, str, ' ');
  cout<<"Output: "<<str;
}
//OP: my
*/
int main() {
  string str;

  cout<<"What is your name? \n";
  getline(cin, str, '.');
  cout<<"Output: "<<str;
}
//IP: my name is this. and that is
// OP: my name is this