// recursion practice
// Fibonacci series - Output the nth number in the Fibonacci series

#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int fibona(int n) {
  // base case
  if(n<=1)  return n;
  
  return (fibona(n-1) + fibona(n-2));
    
}


int main() {
 int n;
 cout<<"enter value n: "<<endl;
 cin>>n;
 cout<<n<<"th number in the fibonacci series: "<<endl;
 
 cout<<fibona(n);

}