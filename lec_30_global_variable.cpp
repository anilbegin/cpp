// Gloabl variable example

#include<iostream>
using std::cout;
using std::endl;

int score = 15;

void a() {
  cout<<endl<<"function a: "<<score;
}

void b() {
  cout<<endl<<"function b: "<<score++; // side effect of Global variable
  
}

int main() {
 a();
 b(); 
 cout<<endl<<"main function: "<<score;
}


