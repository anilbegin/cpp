// recursion example
// find 2 to the Power 'n'

#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int power(int n) {
  if(n==0) return 1;

  return 2 * power(n-1);
}


int main() {
  int n;

  cout<<"2 to power n: "<<endl;
  cout<<"enter the value n: ";
  cin>>n;

  int ans = power(n);

  cout<<ans;
}