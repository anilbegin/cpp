// lec:56: Q2 : Largest Rectangular area in Histogram
// Approach 2 : using Stack ..

#include<iostream>
#include<stack>
#include<vector>
#include<limits.h>
using namespace std;

class Solution {
//  public:  // debug part
  // find index of next Smaller Element of each rect
    vector<int> nextSmallerElement(vector<int> &arr, int n) {
      vector<int> ans(n);
      stack<int> store;
      store.push(-1);

      for(int i = n-1; i>=0; i--) {
        int curr = arr[i];
        // below we have added one more cond i.e store.top() != -1..
        // .. because we dont want arr[-1] >= curr to be checked
        while(store.top() != -1 && arr[store.top()] >= curr) {
          store.pop();
        }
          ans[i] = store.top();
          store.push(i);
      }
      return ans;
    }

    // find index of prev Smaller Element of each rect
    vector<int> prevSmallerElement(vector<int> &arr, int n) {
      vector<int> ans(n);
      stack<int> store;
      store.push(-1);

      for(int i = 0; i<n; i++) {
        int curr = arr[i];
        while(store.top() != -1 && arr[store.top()] >= curr) {
          store.pop();
        }
        ans[i] = store.top();
        store.push(i);
      }
      return ans;
    }

    public:

    int largestRectangleArea(vector<int> &heights) {
//    vector<int> largestRectangleArea(vector<int> &heights) { // debug part
      int n = heights.size();
      vector<int> next(n);
//      vector<int> ans(n); // debug part
      next = nextSmallerElement(heights, n);  // next indexes
      vector<int> prev(n);  
      prev = prevSmallerElement(heights, n);  // prev indexes
      int area = INT_MIN;
      
      for(int i = 0; i<n; i++) {
        int l = heights[i];     // length:  2, 1, 5, 6, 2, 3
        if(next[i] == -1) { // if any next[i] val is -1, replace with 6..
          next[i] = n;      // .. if not replaced it will create error.
        } 
        int b = next[i] - prev[i] - 1;    // max-width possible ...
                                          // ... for each height
                                         
        int newArea = l*b;
//        ans[i] = newArea;  // debug part // store all results in vector 'ans'. 
        area = max(area, newArea);
      }
      return area;
//      return ans;  // debug part
    }
   
    // to check OP's og next and prev funcs
    // this func used for debuging
    //  void print_array(vector<int> ans) {
    //    for(int i = 0; i<ans.size(); i++) cout<<ans[i]<<" ";
    //  }
 };

int main() {
  vector<int> heights {2, 1, 5, 6, 2, 3}; 
  
  Solution sol;
  
 // // start of .. debug part
 //  vector<int> ans1 = sol.nextSmallerElement(heights, 6); // [1, - 1, 4, 4, -1, -1]
 // vector<int> ans2 = sol.prevSmallerElement(heights, 6); // [-1, -1, 1, 2, 1, 4]
 
 // cout<<"nextSmallElem: ";
 // sol.print_array(ans1); // [1, - 1, 4, 4, -1, -1]
 // cout<<endl<<"prevSmallElem: ";
 // sol.print_array(ans2); [-1, -1, 1, 2, 1, 4]
  
 // vector<int> ans = sol.largestRectangleArea(heights); 
 // sol.print_array(ans);  // [2, 6, 10, 6, 8, 3]
 // end of .. // debug part

 cout<<sol.largestRectangleArea(heights); // OP : 10

}