// lec:57 :
// Q1 : Celebrity problem
// Approach 2: using Stack
// shortening the lines of Code ..

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
    int zeroCount = 0;
    for(int i = 0; i<n; i++) {
      if(M[candidate][i] == 0)
      zeroCount++;
    }
    // means candidate knows someone, so its not celeb
    if(zeroCount != n) return -1; 

    // check for everyone knows candidate
    int oneCount = 0;
    for(int i = 0; i<n; i++) {
      if(M[i][candidate] == 1)
      oneCount++;
    }
    // below line means not everyone knows this candidate
    // n-1 because we won't consider M[1][1]
    if(oneCount != n-1) return -1;

    return candidate;
  }
};

int main() {
  int n = 3;
  vector<vector<int>> m {{0, 1, 0}, {0, 0, 0}, {0, 1, 0}};
//  vector<vector<int>> m {{0, 0, 1}, {0, 0, 1}, {0, 0, 0}};
 
 Solution sol;

 cout<<sol.findCelebrity(m, n);
}
