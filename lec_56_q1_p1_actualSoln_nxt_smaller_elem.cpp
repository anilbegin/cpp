// Stack HARD Level QUESTION
// Lec 56: Largest Rectangular area in Histogram
// Warm up Question .. 
// Q1-p1: Next smaller Element
// O (n) using stack

#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int> nextSmallerElement(vector<int> &arr, int n) {
 stack<int> store;
 store.push(-1); 
 vector<int> ans(n);

 for(int i = n-1; i>=0; i--) {
  int curr = arr[i];
  while(store.top() >= curr) {
    store.pop();
  }
  // ans is stack ka top
  ans[i] = store.top();
  store.push(curr);
 } 
 return ans;
 
}

void print_array(vector<int> ans) {
  for(int i = 0; i<ans.size(); i++) {
    cout<<ans[i]<<" ";
  }
}  

int main() {
//  vector<int> arr{5, 2, 1, 4, 3}; // OP:  {2, 1, -1, 3, -1}
  vector<int> arr{2, 1, 4, 3}; // OP :  1 -1 3 -1
  int n = 4;

  vector<int> ans = nextSmallerElement(arr, n);

  print_array(ans);
}

/*
// my own Solution I found while revising..

vector<int> nextSmallerElement(vector<int> &arr, int n) {
  stack<int> store;
  store.push(-1);
  vector<int> ans(n);

  for(int i = n-1; i>=0; i--) {
    //cout<<i;
    bool found = false;
    while(found == false) {
      if(store.top() < arr[i]) {
        found = true;
        ans[i] = store.top();
        store.push(arr[i]);
      } else {
        store.pop();
      }
    }
  }
  return ans;
}
  
*/