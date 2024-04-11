// revising aggressive cows Problem
// using Binary Search Algo
// find the maximum of minimum distance between cows


#include<iostream>
#include<algorithm>
using namespace std;

bool isPossible(int stalls[], int stall_size, int cows, int mid) {
  int cowCount = 1;
  int lastPos = stalls[0];

  for(int i = 1; i<stall_size; i++) {
    if(stalls[i] - lastPos >= mid) {
      cowCount++;
      if(cowCount == cows) {
        return true;
      }
      lastPos = stalls[i];
    }
  }
  return false;
}

int aggressive_cows(int stalls[], int stall_size, int cows) {
  
  sort(stalls, stalls + stall_size);
  int start = 0;
  int end = stalls[stall_size - 1]; // max value within stalls

  int ans = -1;
  int mid = start + (end - start)/2;

  while(start<=end) {
     if(isPossible(stalls, stall_size, cows, mid)) {
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
  int stalls[] = {4, 2, 1, 3, 6};
  int cows = 2;

  int stall_size = sizeof(stalls)/sizeof(stalls[0]);

  int ans = aggressive_cows(stalls, stall_size, cows);

  cout<<ans;
}