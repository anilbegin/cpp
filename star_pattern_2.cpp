#include<iostream>
using namespace std;

int main() {
  int num;
  
  cout << "enter number of rows: ";
  cin >> num;
  
  while(num) {
    int j = 1;
    while(j<=num) {
      cout << '*';
      j++;
    }
    cout <<endl;
    num--;
  }
}