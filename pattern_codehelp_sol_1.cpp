// soln for trianle pattern
/*
   1
  121
 12321
1234321   
*/
#include<iostream>
using namespace std;

int main() {
  int i = 1;
  int num = 4;
  
  while(i<=num) {
    int space = num +1 - i;
    while(space) {
      cout<<" ";
      space--;
    }
    int j = 1;
    while(j<=i) {
      cout<<j;
      j++;
    }
    int start = i - 1;
    while(start) {
      cout<<start;
      start--;
    }
    cout<<endl;
    i++;
  }
}