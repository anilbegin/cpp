// find length of string

#include<iostream>
using namespace std;

int getLength(char name[]) {
  int count = 0;
  for(int i = 0; name[i] != '\0'; i++) {
    count++;
  }
  return count;
}

int main() {
  char name[20];
  int count = 0;
  cout<<"Enter your name:"<<endl;
  cin>>name;
  // length of string
  cout<<"you have entered: "<<name;
  cout<<"\nlength: "<<getLength(name);
}
