#include<iostream>
using namespace std;

// we are using void as the return type in the below function because it does not return back anything
void printCount(int n) {

  for(int i = 1; i <=n; i++) {
    cout << i << " ";
  }
  cout<<endl;
}

int main() {
  int count;

  cout <<"enter the number: ";
  cin >> count;

  printCount(count);
}
