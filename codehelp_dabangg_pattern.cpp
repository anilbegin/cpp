#include<iostream>
using namespace std;

int main() {
  int i = 1;
  int num = 5;

  while(i<=num) {
    int j = 1;
    while(j<=num+1-i) {
      cout<<j;
      j++;
    }
    int k = i;
    while(k-1) {
      cout<<'*';
      k--;      
    }
    int l = i;
    while(l-1) {
      cout<<'*';
      l--;
    }
    int m = num + 1 - i;
    while(m) {
      cout<<m;
      m--;
    }   
    cout<<endl;
    i++;
  }
}

/*
1234554321
1234**4321
123****321
12******21
1********1
*/
