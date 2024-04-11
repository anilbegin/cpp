#include<iostream>
using namespace std;

int bitCounter(int a) {
  int count = 0;
  while(a) {
    count += a & 1;
    a = a >> 1;
  }
  return count;
}

int main() {
  int num1, num2;

  cout <<"enter any 2 numbers: ";
  cin >> num1 >> num2;

  int total_bits = bitCounter(num1) + bitCounter(num2);

  cout << "the total number of bits are: " << total_bits;
}