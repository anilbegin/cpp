/*
find nCr , here nCr = n!/r! * (n-r)!
*/

#include<iostream>
using namespace std;

int fact(int n) {
  int fact = 1;

  for(int i = 1; i<=n; i++) {
    fact = fact * i;
  }
  return fact;
}

int nCr(int n, int r) {
  int num = fact(n);
  int denom = fact(r) * fact(n-r);

  int ans = num/denom;

  return ans;
}

int main() {
  int n, r;

  cout << "enter the value for n and r";
  cin >> n >> r;

  int ans = nCr(n, r);

  cout << "The answer is: " << ans;
}