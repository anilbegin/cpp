#include<iostream>
using namespace std;

int main() {
  int i = 1, num = 4;

  while(i<=num) {
    int j = 1;
    while(j<i) {
      cout<<" ";
      j++;
    }
    int k = i;
    while(k<=num) {
      cout<<k; 
      k++;
    }
    cout<<endl;
    i++;
  }
}


/*
1234
 234
  34
   4
*/