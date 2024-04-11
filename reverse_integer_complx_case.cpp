#include<iostream>
#include<limits.h>
using namespace std;

int main() {
  int x;
  
  cout<<"enter a value to be reversed: ";
  cin>>x;
 
  int ans = 0;
  int digit;
  while(x!=0) {
    
    digit = x%10;
    if((ans > INT_MAX/10) || (ans < INT_MIN/10)) {
      ans= 0;
      break;
    }

    ans = (ans*10) + digit;
    x= x/10;
  }
  cout<<"The reverse is: "<<ans;
}
