// recursion an example by myself
// sum of 'n' numbers

#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int sum(int n) {
  if(n==0) return 0;

  return n + sum(n-1);
}


int main() {
  int n;

  cout<<"find sum of n numbers: "<<endl;
  cout<<"enter the value n: ";
  cin>>n;

  int ans = sum(n);

  cout<<ans;
}
