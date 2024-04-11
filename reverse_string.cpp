// reverse a string

#include<iostream>
using namespace std;

int getLength(char name[]) {
  int count = 0;
  for(int i = 0; name[i] != '\0'; i++) {
    count++;
  }
  return count;
}

void reverse(char name[]) {
  int i = 0;
  int n = getLength(name);
  int j = n-1;
 while(i < j) {
  swap(name[i++], name[j--]);
 }
}

int main() {
  char name[20];
  int count = 0;
  cout<<"Enter your name: ";
  cin>>name;
  cout<<"you have entered: "<<name;

  reverse(name);
  cout<<"\nreverse is: "<<name;
}
