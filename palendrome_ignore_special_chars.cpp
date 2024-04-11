// revise check if a string is palendrome - case insensitive
// ignore special characters

#include<iostream>
using namespace std;

int string_length(char str[]) {
  int count = 0;

  for(int i = 0; str[i] != '\0'; i++) {
    count++;
  }
  return count;
}

char str_toLowercase(char ch) {

  if(ch>='a' && ch<='z') {
    return ch;
  } else {
    char temp = ch - 'A' + 'a';
    return temp;
  }
}

// this function is used, so as to ignore special characters in input string
bool is_special_char(char ch) {
     if(ch>='a' && ch<='z') return 0;
     if(ch>='A' && ch<='Z') return 0;
     if(ch>='0' && ch<='9') return 0;
     return 1;
}

bool check_palendrome(char str[]) {
  int i = 0, j = string_length(str)-1;

  while(i<j) {
    while(is_special_char(str[i])) i++;
    while(is_special_char(str[j])) j--;
    if(str_toLowercase(str[i]) != str_toLowercase(str[j])) {
      return 0;
    } else {
      i++; j--;
    }
  }
  return 1;
}

int main() {
  char str[20];

  cout<<"Enter something: ";
  cin>>str;
  cout<<"you entered: "<<str;
 // cout<<"\n";
 // cout<<is_special_char('`');
  check_palendrome(str) ? cout<<"\nis palendrome" : cout<<"\n is not palendrome";
  
}

/*
bool is_special_char(char ch) {
     if((ch>='a' && ch<='z') || 
     (ch>='A' && ch<='Z') || 
     (ch>='0' && ch<='9')) return 0;
     return 1;
}
*/

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