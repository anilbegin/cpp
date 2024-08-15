#include<iostream>
using namespace std;

int main() {
  int first = 8;
  int *p = &first;
  
  cout<<(*p)++<<" "; // 8 
 // ('8'- because its post increment *p++, 
 // ..so first value prints then increments)
  cout<<endl<<first; // 9
}