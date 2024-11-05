// find values of Fibonacci series till nth term
// by myself
// NOTE: our function slows down the larger the input(n) we give
// This issue can be solved using 'Memoization'
// Memoization - Store the values for recent function calls,..
// .. so future calls do not have to repeat the work

#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int fibo(int n) {
  // basecase
  if(n==0) return 0;
  if(n==1) return 1;

  // recursive function
  return fibo(n-1) + fibo(n-2);
}

int main() {
  int n;

  cout<<"enter a number: ";
  cin>>n;

  // each value of fibonacci series till 'n'
  for(int i = 0; i<=n; i++) {
    cout<<fibo(i)<<" ";
  }
}