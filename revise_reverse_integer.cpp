/*
#include<iostream>
using namespace std;

int main() {
  int num, x, digit, ans= 0;

  cout<<"Enter a number: ";
  cin >>num;
  int m = num;
  while(num!=0) {
    digit = num%10;
    ans = (ans*10) + digit;
    num = num/10; 
  }

  cout << "The reverse of " <<m<<" is "<<ans; 
}
*/
// compliment of a number
// eg: compliment of 5 - 101 - is - 010 i.e 2.
#include<iostream>
using namespace std;

int main() {
  int num;

  cout <<"enter a number ";
  cin >>num;
  int m = num;
  int mask = 0;
  while(num!=0) {
    mask = (mask << 1) | 1;
    num = num >> 1;
  }

  int comp = (~m) & mask;
  cout <<"Compliment of "<<m<<" is "<<comp;
}
////
 