// revise Finding square root using Binary Search ALgo

#include<iostream>
using namespace std;

int find_square_root(int value) {
  int start = 0;
  int end = value -1;

  int mid = start + (end - start)/2;
  int ans = -1;
  while(start<=end) {

    int square = mid * mid;
    if(square == value) return mid;
    if(square < value) {
      ans = mid;
      start = mid + 1;
    } else {
      end = mid - 1;
    }
    mid = start + (end - start)/2;
  }
  return ans;
}

int main() {
  int find = 81;

  int ans = find_square_root(find);

  cout<<ans;
}