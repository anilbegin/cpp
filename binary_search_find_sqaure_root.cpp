// using Binary Search..
// .. find sqaure root of the given number
// use 'long long int' instead of 'int' as 
// ..data type if trying to find square root for very large values..
#include<iostream>
using namespace std;

int find_root(int value) {
  int start = 0;
  int end = value;

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
  int value = 36;

  int ans = find_root(value);

  cout<<"The square root of "<<value<<" is "<<ans;
}
