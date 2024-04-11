#include<iostream>
using namespace std;

int main() {
  int i = 1;
  int num = 4;

  while(i<=num) {
    int j = 1;
    while(j<=i) {
      cout<<" ";
      j++;
    }
    int k = i;
    while(k<=num) {
      cout<<i;
      k++;
    } 
    cout<<endl;
    i++;
  }
}