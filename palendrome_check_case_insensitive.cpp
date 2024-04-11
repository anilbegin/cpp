// Check Palendrome - Case Insensitive
// eg: input - Noon OP: is palendrome

#include<iostream>
using namespace std;

//string length
int string_length(char str[]) {
  int count = 0;
  for(int i = 0; str[i] != '\0'; i++) {
    count++;
  }
  return count;
}

// converts uppercase char to lowercase
char str_toLowercase(char ch) {
  if(ch>='a' && ch<='z') {
    return ch;
  } else {
    char temp = ch - 'A' + 'a';
    return temp;
  }
}

bool chk_palendrome(char str[]) {
  int i = 0, j = string_length(str) -1;

  while(i<j) {
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
  cout<<"You entered: "<<str<<"\n";
  chk_palendrome(str) ? cout<<"is palendrome" : cout<<"is not palendrome";  
}


