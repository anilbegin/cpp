#include<iostream>
using namespace std;

int main() {
  int i = 1;
  int num = 4;
  while(i<=num) {
    int j = i;
    while(j<num) {
      cout<<" ";
      j++;
    }
    int k = 1;
    while(k<=i) {
      cout<<i;
      k++;
    }
    cout<<endl;
    i++;
  }
}

/*
   1
  22
 333
4444        
*/