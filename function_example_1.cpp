#include<iostream>
using namespace std;

int power(int x, int y) {
  int ans = 1;

  for(int i = 1; i<=y; i++) {
    ans =  ans * x;
  }

  return ans;
}

int main() {
  int a , b, ans;

  cout <<"Enter the number and the power: ";
  cin >>a >>b;

  ans = power(a, b);

  cout << a <<" to the power " << b << " is " << ans;
}