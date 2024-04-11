#include<iostream>
using namespace std;

int fibonacci(int n) {
  int i = 2, a = 0, b = 1, c;
  while(i<=n) {
    c = a + b;
    a = b;
    b = c;  
    i++;
  }
  return b;
}

int main() {
  int num;

  cout <<"Enter the nth place, you want Fibonacci value of: ";
  cin >>num;

  int nth_term = fibonacci(num);

  cout << "The " << num << "th value in the fibonacci series is: "<< nth_term;
}