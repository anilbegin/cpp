
#include<iostream>
using namespace std;

/*
int main() {
  string str = "this is my pc";

  cout<<str;
}
OP: this is my pc
*/
/*
int main() {
  string str;

  cout<<"What is your name? \n";
  cin>>str;
  cout<<"Output: "<<str;
}
// OP: my
*/
int main() {
  string str;

  cout<<"What is your name? \n";
  getline(cin, str);
  cout<<"Output: "<<str;
}
// OP: my name is earth

