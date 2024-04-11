// remove all occurences of a substring 
// eg: s = "daabcbaabcbc", remove: "abc"
// while removing abc 1st.. da'abc'baabcbc, after removing.. s = dabaabcbc 
// while removing abc 2nd.. daba'abc'bc, after removing.. s = dababc
// while removing abc 3rd.. dab'abc', after removing.. s = dab
// Final OP: s = "dab"
// we will use two C++ functions, .find() and .erase()

#include<iostream>
using namespace std;
// str .. original string, part.. part to be remove from the original string
string removeOccurences(string str, string part) {
  while(str.length() != 0 && str.find(part) < str.length()) {
    str.erase(str.find(part), part.length());
  }
  return str;
}

int main() {
  string str = "anil@gmail.com";
  string part = "@gmail.com";

  cout<<removeOccurences(str, part);
  
}
