// check if a string is palendrome
// here if our program differentiates between upper and lower case
// eg: if i/p: noon o/p: is palendrome
// eg: if i/p: Noon o/p: not palendrome

#include<iostream>
using namespace std;

int string_length(char str[]) {
  int count = 0;
  for(int i = 0 ; str[i] != '\0'; i++) {
    count++;
  }
  return count;
}

bool check_palendrome(char str[]) {
  int i = 0; 
  int j = string_length(str)-1;

  while(i<j) {
    if(str[i] != str[j]) {
      return 0;
    } else {
      i++;j--;
    }
  }
  return 1;
}

int main() {
  char str[25];

  cout<<"Enter something: ";
  cin>>str;
  cout<<"You have entered: "<<str;
  check_palendrome(str) ? cout<<"\nit is palendrome" : cout<<"\nnot palendrome";
}
