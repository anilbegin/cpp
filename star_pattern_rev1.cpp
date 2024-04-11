#include<iostream>
using namespace std;

int main() {
  int i=1;
  int num = 4;
  while(i<=num) {
    int space = num - i;
    while(space) {
      cout<<" ";
      space--;
    }
    int j = 1;
    while(j<=i) {
      cout<<'*';
      j++;
    }
    cout<<endl;
    i++;
  }
}
        