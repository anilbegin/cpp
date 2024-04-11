// revise Binary Search 
// finding square root with precision upto 3 decimals

#include<iostream>
using namespace std;

int square_root(int value) {
  int start = 0;
  int end = value -1;

  int mid = start + (end-start)/2;
  int ans = -1;
  while(start<=end) {

    int square = mid * mid;
    if(square == value) return mid;
    if(square < value) {
      ans = mid;
      start = mid + 1;
    } else if(square > value) {
      end = mid - 1;
    }
    mid = start + (end - start)/2;
  }
  return ans;
}

double precise_root(int value, int precision_upto, int tempSol) {
  double factor = 1;
  int limit = precision_upto;
  double ans = tempSol;
  for(int i = 0; i<limit; i++) {
    factor = factor/10;
    for(double j = ans; j*j<value; j = j + factor) {
      ans = j;
    }
  }
  return ans;

}

int main() {
  int find = 82;

  int tempSol = square_root(find);

  double precision = precise_root(find, 3, tempSol);

  cout<<precision;
  
}