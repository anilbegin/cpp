// MCQ

#include<iostream>
using namespace std;

int main() {
  char arr[] = "abcde";
  char *p = &arr[0]; // or say 'arr' (without the single quotes)
  
/* question */  cout<<p; // abcde - char array acts different than int array
           // so it doesnt print address but the whole array

  cout<<endl<<p+1; // bcde
  cout<<endl<<p+2; // cde
  cout<<endl<<arr;  // abcde
  return 0;
}

