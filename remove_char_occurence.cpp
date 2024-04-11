// remove all occurences of a character from a string
// eg: this is it infact apple. remove: 'i'
// OP: ths s t nfact apple.

#include<iostream>
using namespace std;

void remove_char(char str[], char r) {
  int pos = 0;

  while(str[pos] != '\0') {
    if(str[pos] == r) {
      int newpos = pos;
      while(str[newpos] != '\0') {
        str[newpos] = str[newpos+1];
        newpos++;
      }
    } else pos++;
  }
}

int main() {
  char str[] = "the mooon is going home now";
  char remove = 'o';
  cout<<str;
  
  remove_char(str, remove);
  cout<<"\nafter remove..\n"<<str;
}
