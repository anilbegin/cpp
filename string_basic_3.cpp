#include<iostream>
using namespace std;
/*
int main() {
  char str[5];

  cout<<"What is your name? \n";
  gets(str);
  cout<<"Output: "<<str;
}
*/
/*
//IP:
What is your name? 
my name is ion, i am from earth.
OP:
Output: my name is ion, i am from earth.
*/
int main() {
  char str[5];

  cout<<"What is your name? \n";
  fgets(str, 5, stdin);
  cout<<"Output: "<<str;
}
//OP:
/*
What is your name? 
my name is
Output: my n
*/
// above example, accepts 4 characters, 5th is null character
