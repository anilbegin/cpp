#include<iostream>
using namespace std;

// return  0 - not a prime number.
// return 1 - is a prime number.

bool isPrime(int num) {
  
  for(int i = 2; i<num; i++) {
    if(num%i == 0) {
      return 0;
    } 
  }
  return 1;
  
}

int main() {
  int num;

  cout<< "Check if a number is Prime or not" <<endl;
  cout <<"Enter a number: ";
  cin >>num;

  if(isPrime(num)) {
    cout << num << " is a Prime number";
  } else {
    cout << num << " is NOT a Prime number";
  }
}