// largest rectangular area in Histogram
// improvsed code by myself, using better Var names
// using brute force method

#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int largestRectangleArea(vector<int>& arr) {
  vector<int> ans;
  int max_area = -1;
  for(int i = 0; i<arr.size(); i++) {
    int curr = arr[i];
    int left = i-1, right = i+1;
    int left_sum = 0, right_sum = 0;
    int count = 1;
    int total = 0;
    while(left >= 0) {
      if(arr[left] >= curr) {
        count++;
        left--;
      } else break;
    }
    left_sum = curr * count;
    count = 1;
    while(right <arr.size()) {
      if(arr[right] >= curr) {
        count++;
        right++;
      } else break;
    }
    right_sum = curr * count;
    total = left_sum + right_sum - curr;
    max_area = max(max_area, total); 
  }
  return max_area;
  
}

int main() {
//  vector<int> heights{2, 1, 5, 6, 2, 3}; // OP: 10
  vector<int> heights{2, 4, 6, 4, 2}; // OP: 12
  cout<<largestRectangleArea(heights);
}

/*
// Improvised (brute force method) CODE 
// after taking feedback from CGPT

class Solution {
  public:
    int largestRectangleArea(vector<int>& heights) {
      int n = heights.size();
      int max_area = -1;
      for(int i = 0; i<n ;i++) {
        int prev = i - 1, next = i + 1;
        int curr = heights[i];
        int left_count = 1;
        int right_count = 1;
        int width = 0;
        int prev_total = 0;
        int next_total = 0;
        int total = 0;
        int area = 0;
        while(prev >= 0 && heights[prev] >= curr) {
          left_count++;
          prev--;
        }
        
        while(next < n && heights[next] >= curr) {
          right_count++;
          next++;
        }
      width = left_count + right_count - 1;  
      area = curr * width; // curr = heights[i]
      max_area = max(max_area, area);
      }
      return max_area;
    }
};

*/