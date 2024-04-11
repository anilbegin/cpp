// replace spaces with @40
// without using extra space

#include<iostream>
//#include<strings.h>
using namespace std;

string replace_spaces(string str) {
    
  for(int i = 0; i<str.length(); i++) {
    if(str[i] == ' ') {
      str.replace(i, 1, "@40");
    } 
  }
  return str;
}

int main() {
  string str = "i am here then am there";
  
  cout<<replace_spaces(str);
  
}
