// Lec 56: Q2 - Largest Rectangular Area in Histogram
// Approach 1: Brute Force Method (by myself)
// T.C: O(n-square)

#include<iostream>
#include<vector>
//#include<algorithm> // used for *max_element()
using namespace std;

  // left : index used to sum up values on the left greater than Current value
  // right: index used to sum up values on the right greater than Current value
  // n = last index location in array. 
  // left_sum : total width a Histogram bar can cover on left
  // right_sum : total width a Histogram bar can cover on right
  // total = left_sum + right_sum - arr[i] // we substract arr[i] once, because we take count = 1 ..
  // .. for both left and right, so own value of arr[i] gets added twice;

  int largestRectangleArea(vector<int> &arr) {
    int n = arr.size()-1;
    //vector<int> ans;  
    int ans = 0;
    for(int i = 0; i<=n; i++) {
      int left = i-1, right = i+1;    
      int left_sum = 0, right_sum = 0;
      int count = 1;
      int total = 0;
      
      while(left >= 0) {
        if(arr[left] >= arr[i]) {
          count++;
          left--;
        } else break;
      }
      left_sum = arr[i] * count;
      count = 1;
      while(right <=n) {
        if(arr[right] >= arr[i]) {
          count++;
          right++;
        } else break;
      }
      right_sum = arr[i] * count;
      total = left_sum + right_sum - arr[i];
    //  cout<<total<<" ";
      ans = max(ans, total);    // max(value1, value2);
      //ans.push_back(total);
    }
    
    //return *max_element(ans.begin(), ans.end());
    return ans;
  }


int main() {
 vector<int> heights{2, 1, 5, 6, 2, 3};
 
 cout<< largestRectangleArea(heights);
//  cout<<endl;
// cout<<*max_element(heights.begin(), heights.end()); // 6 // just trial
 
}
