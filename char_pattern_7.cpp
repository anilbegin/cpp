#include<iostream>
using namespace std;

int main() {
  int i = 0;
  int num;
   cout << "Enter number of row: ";
   cin >> num;
   while(i<num) {
    int cols = 0;
    char a = 'A' + i; 
    while(cols<=i) {
      cout<<a;
      a++;
      cols++;
    }
    cout<<endl;
    i++;
   }
}