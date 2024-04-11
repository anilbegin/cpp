// aggressive Cows problem
// we use Binary Search Algo to solve this problem

#include<iostream>
#include<algorithm> // for using sort function 
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
  // using Search Space

   sort(stalls, stalls + stall_size); 
   int start = 0;
   int maxi = -1;

   for(int i = 0; i<stall_size; i++) {
    maxi = max(maxi, stalls[i]); 
   }
   int end = maxi;
   int ans = -1; 
   int mid = start +  (end - start)/2;

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
  /*
  Another Input Value
  int stalls[] = {1, 2, 4, 8, 9};
  int cows = 3;
  Output Should be: 3
  */
  int stall_size = sizeof(stalls)/sizeof(stalls[0]);

  int min_value = aggressive_cows(stalls, stall_size, cows); 

  cout<<min_value;
}
