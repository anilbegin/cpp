// find duplicate in the array of size N.
// with elements from 1 to N-1
// there is a single element which has a duplicate
// find that element

#include<iostream>
#include<vector>
using namespace std;

int find_duplicate(vector<int> &arr, int size) {
  int ans = 0;

  for(int i = 0; i<size; i++) {
    ans = ans^arr[i];
  }
  for(int i = 1; i<size; i++) {
    ans= ans^i;
  }
  return ans;
}

int main() {
  vector<int> arr = {1, 1, 3, 2, 4};
  
  int size = arr.size();
  
 int the_duplicate = find_duplicate(arr, size);

  cout<<the_duplicate;
}