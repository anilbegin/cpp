// lec: 57: Q2: Mamimum area of a Rectangle in Binary Matrix - all 1's

#include<iostream>
#include<stack>
#include<vector>
#include<limits.h>
using namespace std;

#define MAX 4

class Solution {
  private:
   // find index of next Smaller Element of each rect
    vector<int> nextSmallerElement(int *arr, int n) {
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
    vector<int> prevSmallerElement(int *arr, int n) {
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

    // here n is the number of Columns
    int largestRectangleArea(int *heights, int n) { // we pass array instead of vector

      // int n = heights.size();
      vector<int> next(n);

      next = nextSmallerElement(heights, n);  // next indexes
      vector<int> prev(n);  
      prev = prevSmallerElement(heights, n);  // prev indexes
      int area = INT_MIN;
      
      for(int i = 0; i<n; i++) {
        int l = heights[i];     
        if(next[i] == -1) { // if any next[i] val is -1, replace with 4..
          next[i] = n;      // .. if not replaced it will create error.
        } 
        int b = next[i] - prev[i] - 1;    // max-width possible ...
                                          // ... for each height
                                         
        int newArea = l*b;
        area = max(area, newArea);
      }
      return area;
    }

  public:
    // here m is the number of Columns
    int maxArea(int A[MAX][MAX], int n, int m) {
      
      // compute area for 1st row
      int area = largestRectangleArea(A[0], m);

      for(int i = 1; i<n; i++) {
        for(int j = 0; j<m; j++) {

          // row update: by adding previous row values
          if(A[i][j] != 0) {
            A[i][j] = A[i][j] + A[i-1][j];
          } else {
            A[i][j] = 0;
          }
        }
        // entire row is updated now.
        int newArea = largestRectangleArea(A[i], m);
        area = max(area, newArea);
      }
      return area;
    }
};
  
int main() {
  int n = 4, m = 4;
  int A[MAX][MAX] = {{0, 1, 1, 0}, 
                  {1, 1, 1, 1}, 
                  {1, 1, 1, 1}, 
                  {1, 1, 0, 0}};    // OP : 8
  /* // another test input
    int n = 3, m = 3;
    int A[MAX][MAX] = {{0, 1, 1}, 
                      {1, 1, 1}, 
                      {0, 1, 1}};   // OP : 6
  */

  Solution sol;
  cout<<sol.maxArea(A, n, m);                 
}
