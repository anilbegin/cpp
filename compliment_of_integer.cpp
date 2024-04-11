#include<iostream>
using namespace std;

int main() {
  int n;
  cout<<"enter a number: ";
  cin>>n;
  int m = n;
  int mask = 0;
  int ans;
  if(n == 0) {
    ans = 1;
  } else {
      while(m!=0) {
      mask = (mask << 1) | 1;
      m = m >> 1;
    } 
      ans = (~n) & mask;
  }
cout<<"the compliment of "<<n<<" is "<<ans;  
 
}
