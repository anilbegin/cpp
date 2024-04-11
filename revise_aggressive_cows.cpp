// aggressive Cows problem
// we use Binary Search Algo to solve this problem

#include<iostream>
#include<algorithm>
using namespace std;

bool isPossible(int stalls[], int stall_size, int cows, int mid) {

  int cowCount = 1;
  int lastPos = stalls[0];

  for(int i = 1; i<stall_size; i++) {

    if(stalls[i] - lastPos == mid) {
      cowCount++;
      if(cowCount == cows) {
        return true;
      }
      lastPos = stalls[i];
    }
  }
  return false;
}

int aggressive_cows(int cow_stall[], int stall_size, int cows) {
  // using Search Space

   sort(cow_stall, cow_stall + stall_size); 
   int start = 0;
   //int maxi = -1;
   //int maxi = cow_stall[stall_size - 1];

   /* // we are already sorting the array, so we dont need below for loop
   for(int i = 0; i<stall_size; i++) { 
    maxi = max(maxi, cow_stall[i]); 
   }
   */
   //cout<<"maxi: "<<maxi<<endl;
   int end = cow_stall[stall_size - 1];
   //cout<<"end: "<<end<<endl;
   int ans = -1; 
   int mid = start +  (end - start)/2;

   while(start<=end) {

    if(isPossible(cow_stall, stall_size, cows, mid)) {
    //  cout<<"mid: "<<mid<<endl;
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
  int cow_stall[] = {4, 2, 1, 3, 6};
  int cows = 2;
  int stall_size = sizeof(cow_stall)/sizeof(cow_stall[0]);

  int min_value = aggressive_cows(cow_stall, stall_size, cows); 

  cout<<min_value;
}