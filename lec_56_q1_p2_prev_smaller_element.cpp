// lec:56: Q1 - p2 : Previous Smaller ELement
// Code by Myself

#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> prevSmallerElement(vector<int> &arr, int n) {
  stack<int> store;
  store.push(-1);
  vector<int> ans(n);

  for(int i = 0; i<n; i++) {
    int curr = arr[i];
    while(store.top() >= curr) store.pop();
    ans[i] = store.top();
    store.push(curr);
  }
  return ans;
}

void print_array(vector<int> ans) {
  for(int i = 0; i<ans.size(); i++) cout<<ans[i]<<" ";
}

int main() {
//  vector<int> arr{5, 2, 1, 4, 3}; // OP : -1 , -1, -1, 1, 1
  vector<int> arr{4, 5, 2, 10, 8}; // OP : -1 4 -1 2 2
  int n = 5;

  vector<int> ans = prevSmallerElement(arr, n);
  print_array(ans);
}
