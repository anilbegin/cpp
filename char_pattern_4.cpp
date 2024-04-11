#include<iostream>
using namespace std;

int main() {
  int num;
  cout << "Enter number of characters: ";
  cin >> num;
  int i = 0;
  
  while(i<num) {
    int cols = 1;
    char a = 'A' + i;
    while(cols<=num) {
      cout << a;
      a++;
      cols++;
    }
    cout <<endl;
    i++;  
   }
}

