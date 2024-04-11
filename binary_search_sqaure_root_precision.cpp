// using Binary Search..
// .. find sqaure root of the given number ..
// .. **WITH A PRECISION OF 3 DECIMAL POINTS**
// eg: sqaure root of 37 is 6.082

#include<iostream>
using namespace std;

double precision_root(int value, int preciseTo, int tempSol) {
  double factor = 1;
  double ans = tempSol;

  for(int i = 0; i<preciseTo; i++) {
    factor = factor/10;
    for(double j=ans; j*j<value; j = j + factor) {
      ans = j;
    }
  }
  return ans;
}

int temp_find_root(int value) {
  int start = 0;
  int end = value -1 ;

  int mid = start + (end - start)/2;
  int ans = -1;
  while(start<=end) {
    int square = mid * mid;
    if(square == value) return mid;
    if(square < value) {
      ans = mid;
      start = mid +1;
    } else if(square > value) {
      end = mid -1;
    }
    mid = start + (end - start)/2;
  }
  return ans;
}

int main() {
  int find;

  cout<<"Enter a number: ";
  cin>>find;

  int tempSol = temp_find_root(find);

  double ans = precision_root(find, 3, tempSol);

  cout<<"The square root of "<<find<<" is "<<ans;
}
