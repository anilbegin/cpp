// revise triplet sum
// find if from the given array there is a triplet which sums up to X.
// eg: {12, 3, 4, 1, 6, 9} X = 24., o/p; 12, 3, 9
// the previous method time complexity is n-Cube, because it has 3 for loops
// we will work on a better approach known as 2 pointer approach, with time complexity, nlogn or less than n square
// logn < n < nlogn < n-square < n-cube
// find triplet which sums upto 24

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool triplet_sum(vector<int> arr, int x) {
  sort(arr.begin(), arr.end());

  for(int i = 0; i<arr.size(); i++) {
    int l = i+1, r = arr.size() - 1;
    while(l<r) {
      int sum = arr[i] + arr[l] + arr[r];
      if(sum == x) {
        cout<<arr[i]<<" "<<arr[l]<<" "<<arr[r];
        return true;
      } else if(sum > x) {
        r--;
      } else {
        l++;
      }
    }
  }
  return false;
}

int main() {
//  vector<int> arr{12, 3, 4, 1, 6, 9};
//  int x = 4;
vector<int> arr{1, 4, 45, 6, 10, 8};
int x = 13;

 triplet_sum(arr, x) ? cout<<" true" : cout<<" false";
}
