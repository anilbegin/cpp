#include<iostream>
using namespace std;

int main() {
  int i = 1;
  int num = 4;

  while(i<=num) {
    int j = i;
    while(j<=num) {
      cout<<" ";
      j++;
    }
    int k = 1;
    while(k<=i) {
      cout<<k;
      k++;
    }
    int l = i-1;
    while(l) {
      cout<<l;
      l--;
    }   
     cout<<endl;
    i++;
  } 
}
// rough work below
/*
1
21
321
4321
*/


/*
   1
  121
 12321
1234321   

*/