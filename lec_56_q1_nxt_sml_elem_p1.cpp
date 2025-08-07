// Stack HARD Level QUESTION
// Lec 56: Largest Rectangular area in Histogram
// Warm up Question .. 
// Q: Next smaller Element
// Solution found by myself
// IMP NOTE:
// Below Soln is Good, but there is a misunderstanding..
// .. we need to find the Smaller Element that is literlly next to the current ELement,
// eg: Input: [5, 2, 1, 4, 3]  Output: [2, 1, -1, 3, -1]
// But Below Solution finds the smallest Element to exist to the right, w.r.t current ELement

#include<iostream>
#include<vector>
using namespace std;

vector<int> nextSmallerElement(vector<int> arr) {
  vector<int> ans;
  
  for(int i = 0;i<arr.size(); i++) {
    int count = 0;
    for(int j = i+1; j<arr.size(); j++) {
      if(arr[j] < arr[i]) {
        arr[i] = arr[j];  // if a smaller element found for arr[j] then value passed to arr[i]..
                          // .. so as to check if the next element is even smaller then the ..
                          // current value in arr[i].  
        count++;  // count increment only when a smaller element is found for arr[j].
      }
    }
    // current Element has no Next Element with a lesser value hence -1 is pushed.
    if(count == 0) ans.push_back(-1);  
    // value for arr[i] is absorbed from arr[j]...
    // ... when a value smaller then current element is found 
    if(count > 0) ans.push_back(arr[i]); 
  }
  return ans;
}

void print_array(vector<int> ans) {
  for(int i = 0; i<ans.size(); i++) {
    cout<<ans[i]<<" ";
  }
}  

int main() {
 // vector<int> arr{5, 2, 1, 4, 3}; // OP:  {1 1 -1 3 -1}
 vector<int> arr{2, 1, 4, 3}; // OP: {1 -1 3 -1}
  vector<int> ans = nextSmallerElement(arr);

  print_array(ans);
}
 

/*
// better Soln found by Myself on 21/05/2025

vector<int> nextSmallerElement(vector<int> &arr, int n) {
  vector<int> ans(n);
  for(int i = 0; i<n; i++) {
    bool found = false;
    for(int j = i+1; j<n; j++) {
      if(arr[j] < arr[i]) {
        found = true;
        ans[i] = arr[j];
        break;
      }
    }
    if(found == false) ans[i] = -1;
  }
  return ans;
}

*/