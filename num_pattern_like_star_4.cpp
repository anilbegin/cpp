#include<iostream>
using namespace std;

int main() {
  int i = 1;
  int count = 1;
  int num = 4;
  
  while(i<=num) {
    int j = i;
    while(j<num) {
      cout<<" ";
      j++;
    }
    int k = 1;
    while(k<=i) {
      cout<<count;
      k++;
      count++;
    }
    cout<<endl;
    i++;
  }
}