#include<iostream>
using namespace std;

int main() {
  int n = 4;
  int i = 1;
  
  while(i<=n) {
    int j = 1;
    int k = i;
    while(j<=i) {
      cout<<k;
      k--;
      j++;
    }
    cout<<endl;
    i++;
  }
}