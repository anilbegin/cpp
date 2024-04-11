// remove all occurences of a character from a string

#include<iostream>
using namespace std;

string remove_part(string s, string part) {
 int n = part.length();

 int idx;
 // while(1) - means infinite loop till a 'break' is encountered
 while(1) {
  idx = s.find(part);
  
  if(idx == -1) 
    break;
  s.erase(idx, n);
 }
 return s;
}

int main() {
  string str = "swingking.gmail";
  string part = "ing";

  cout<<"Original string:\n"<<str;
  
  cout<<"\n\nmodified string:\n"<<remove_part(str, part);
}