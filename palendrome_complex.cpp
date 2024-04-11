// check if a string is Palendrome - case insensitive
// ignore all special characters and spaces

#include<iostream>
using namespace std;

// convert to lowercase
char toLowercase(char ch) {
  if((ch>='a' && ch<='z') || (ch>='0' && ch<='9')) {
    return ch;
  } else {
    char temp = ch - 'A' + 'a';
    return temp; 
  }
}

// ignore special characters in input string
bool valid_char(char ch) {
     if((ch>='a' && ch<='z') || 
     (ch>='A' && ch<='Z') || 
     (ch>='0' && ch<='9')) return 1;
     return 0;
}

// remove all invalid characters and spaces
string collect_valid_chars(string str) {
  
  string temp = "";
  
  for(int j = 0; j<str.length(); j++) {
    if(valid_char(str[j])) {
      temp.push_back(toLowercase(str[j]));
    }
  }
/*
  // convert all characters to lowercase
  for(int j = 0; j<temp.length(); j++) {
    temp[j] = toLowercase(temp[j]);
  }
*/  
  return temp;
}

 // check palendrome
 bool check_palendrome(string str) {
  string s = collect_valid_chars(str);
      
    int i = 0, j = s.length()-1;

    while(i<j) {
      if(s[i] != s[j]) {
        return 0;
      } else {
        i++; j--;
      }
    }
    return 1;
  }

int main() {
  string str = "A man, a plan, a canal: Panama";

//  cout<<collect_valid_chars(str);
  check_palendrome(str) ? cout<<"\nis palendrome" : cout<<"\n is not palendrome";
 
}

/*
Enter something: 5?36@6?35+
you entered: 5?36@6?35+
is palendrome
*/
/*
Enter something: 5?36@6?35+1  
you entered: 5?36@6?35+1
is not palendrome
*/



