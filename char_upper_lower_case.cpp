// change single character to UpperCase/LowerCase

#include<iostream>
using namespace std;

char str_toLowercase(char ch) {
  if(ch>='a' && ch<='z') {
    return ch;
  } else {
    char temp = ch - 'A' + 'a';
    return temp;
  }
}

char str_toUppercase(char ch) {
  if(ch>='A' && ch<='Z') {
    return ch;
  } else {
    char temp = ch - 'a' + 'A';
    return temp;
  }
}

int main() {
  char ch1, ch2;

  cout<<"Enter something in Caps: ";
  cin>>ch1;
  cout<<"enter something in Small: ";
  cin>>ch2;
  cout<<"you entered: "<<ch1<<" in caps\nand "<<ch2<<" in small";
  cout<<"\nto lowercase: "<<str_toLowercase(ch1);
  cout<<"\nto uppercase: "<<str_toUppercase(ch2);
}