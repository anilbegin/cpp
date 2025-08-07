// lec 57 : celebrity Problem using Stack (ShORTENED CODE, by myself lines marked **)
// celebrity : does not know anyone, 
// everyone knows the celeb
// using Stack

#include<iostream>
#include<stack>
#include<vector>
using namespace std;

class Solution {
  private:
    bool knows(int a, int b, vector<vector<int>>& M) {
      if(M[a][b] == 1) {
        return true;
      } else {
        return false;
      }
    }
  public:
    int findCelebrity(vector<vector<int>>& M, int n) {
      stack<int> store;

      for(int i = 0; i<n; i++) {
        store.push(i);
      }

      while(store.size() > 1) {
        int a = store.top();
        store.pop();
        int b = store.top();
        store.pop();

        // if a knows b, then 'a' is surely not a celeb becuase celeb knows no one. 
        if(knows(a, b, M)) {
          store.push(b);
        } else {
          store.push(a);
        }
      }
      int candidate = store.top(); // possible celeb

      // Now you check to make sure the 'candidate' is a celeb
      int rowCount = 0, colCount = 0;   // ** from this line
      for(int i = 0; i<n; i++) {
        if(candidate != i) {
          if(M[candidate][i] == 0) {
            colCount++;   // proves that candidate knows no one if colCount = n-1
          }
          if(M[i][candidate] == 1) {
            rowCount++;   // proves that everyone knows candidate if rowCount = n-1
          }
        }
      }
      if(rowCount == n-1 && colCount == n-1) return candidate;  // ** to this line 
      return -1;
    }
};  

int main() {
  vector<vector<int>> arr {{0, 0, 1}, 
                          {0, 0, 1}, 
                          {0, 0, 0}};
  int n = 3;

  Solution sol;
  cout<<sol.findCelebrity(arr, n);
}

