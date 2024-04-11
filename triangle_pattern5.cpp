#include<iostream>
using namespace std;

int main() {
  int n=4;
  
  int i = 1;
  while(i<=n) {
    int j = 1;
  //  int k = i; (soln to basicpattern4_XbyX.cpp without using this line)
    while(j<=i) {
      cout<<i+j-1;
      j++;
    }
    cout<<endl;
    i++;
  }
}
