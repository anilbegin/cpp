// lec:57 :
// Q1 : Celebrity problem
// Approach 2: using Stack

#include<iostream>
#include<vector>
#include<stack>
using namespace std;

class Solution {
  private:
    bool knows(int a , int b, vector<vector<int>>& M) {
      if(M[a][b] == 1) {
        return true;
      } else {
        return false;
      }
    }
  public:
  // Function to find the celebrity
  int findCelebrity(vector<vector<int>>& M, int n) {
      // Try every person from 0 to n-1
    stack<int> store;
    for(int i = 0; i<n; i++) {
      store.push(i);
    }
    
    while(store.size() > 1) {
      int a = store.top();
      store.pop();
      int b = store.top();
      store.pop();

      // check if 'a' knows 'b'
      if(knows(a, b, M)) {
        store.push(b);
      } else {
        store.push(a);
      }
    }
    int candidate = store.top();
    // single element in stack is a potential celebrity
    
    // check for - 'candidate knows no one'
    bool rowCheck = false;
    int zeroCount = 0;
    for(int i = 0; i<n; i++) {
      if(M[candidate][i] == 0)
      zeroCount++;
    }
    if(zeroCount == n) {
      rowCheck = true;
    }

    // check for everyone knows candidate
    bool colCheck = false;
    int oneCount = 0;
    for(int i = 0; i<n; i++) {
      if(M[i][candidate] == 1)
      oneCount++;
    }
    if(oneCount == n-1) { // 1 element will be part of diagonal, we have to ignore that count
      colCheck = true;
    }

    if(rowCheck == true && colCheck == true) {
      return candidate;
    } else {
      return -1;
    }
  }
};

int main() {
  int n = 3;
  vector<vector<int>> m {{0, 1, 0}, {0, 0, 0}, {0, 1, 0}};
//  vector<vector<int>> m {{0, 0, 1}, {0, 0, 1}, {0, 0, 0}};
 
 Solution sol;

 cout<<sol.findCelebrity(m, n);
}
