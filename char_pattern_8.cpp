#include<iostream>
using namespace std;

int main() {
  int i = 0;
  int num = 4;
   while(i<num) {
    int cols = 0;
    char a = 'D' - i; 
    while(cols<=i) {
      cout<<a;
      a++;
      cols++;
    }
    cout<<endl;
    i++;
   }
}
