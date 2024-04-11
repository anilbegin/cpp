#include<iostream>
using namespace std;

int power() {
  int x, y;

  cin >> x >> y;

  int ans = 1;

  for(int i = 1; i<=y; i++) {
    ans =  ans * x;
  }

  return ans;
}

int main() {
 
 int ans = power();

  cout <<"The answer is: " << ans;
}