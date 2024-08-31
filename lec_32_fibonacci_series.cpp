// recursion - fibonacci - get nth term in fibonacci series
// Codehelp


#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int fib(int n) {
  
  //basecase
  if(n==0) return 0;
  if(n==1) return 1;

  int ans = fib(n-1) + fib(n-2);
  
  return ans;
}


int main() {
 int n = 3;
 
 cout<<fib(n);
}