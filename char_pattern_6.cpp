#include<iostream>
using namespace std;

int main() {
  int i = 1;
  int num;
  cout <<"Enter number of rows: ";
  cin >> num;
  char a = 'A';
  while(i<=num) {
    int col = 1;
    while(col<=i) {
      cout<<a;
      col++;
      a++;
    }
    cout<<endl;
    i++;
  }
}