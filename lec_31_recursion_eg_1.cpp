// recursion basic example
// find factorial of a number

#include<iostream>
using std::cout;
using std::cin;
using std::endl;

/*
  int factorial(int n) {
    
    if(n==0) return 1;

    int smallerProblem = factorial(n-1);
    int biggerProblem = n * smallerProblem;

    return biggerProblem;
  }

*/

int factorial(int n) {
//  cout<<n;
  if(n==0) return 1;

  return n * factorial(n-1);
}

int main() {
  int n;

  cout<<"Enter value to find factorial: "<<endl;
  cin>>n;

  int ans = factorial(n);

  cout<<endl<<ans;
}

