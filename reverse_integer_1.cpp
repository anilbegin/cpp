// reverse the number entered by the user
// basic case
#include<iostream>
using namespace std;

int main() {
  int x;
  cout<<"enter number: ";
  cin>>x;
  int ans = 0;
  while(x!=0) {
    
    int digit = x%10;
    ans=(ans*10) + digit;
    x= x/10;
  }
  cout << ans;
}