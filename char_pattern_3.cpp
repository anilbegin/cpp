#include<iostream>
using namespace std;

int main() {
  int num;
  cout << "Enter number of characters: ";
  cin >> num;
  int i = 1;
  char a = 'A';
  while(i<=num) {
    int cols = 1;
    while(cols<=num) {
      cout << a;
      a++;
      cols++;
    }
    cout <<endl;
    i++;  
   }
}

