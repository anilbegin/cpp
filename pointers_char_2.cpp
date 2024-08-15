#include<iostream>
using namespace std;

int main() {
  char temp = 'z'; 
  char *ptr = &temp;

  cout<<endl<<"ptr: "<<ptr; // z♂ a (it doesn't give us the expected OP)
  // because cout is looking for a null character which it does not find after z
  // so it keeps printing till it finds a null character.
  cout<<endl<<"*ptr: "<<*ptr; // z

}