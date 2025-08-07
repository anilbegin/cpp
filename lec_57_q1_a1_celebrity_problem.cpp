// lec:57 :
// Q1 : Celebrity problem
// Approach 1: Burte Force method (found from CGPT)

#include<iostream>
#include<vector>
#include<stack>
using namespace std;

class Solution {
  public:
  // Function to find the celebrity
  int findCelebrity(vector<vector<int>>& M, int n) {
      // Try every person from 0 to n-1
      for (int i = 0; i < n; i++) {
          bool knowsNoOne = true;        // Does person i know no one?
          bool knownByEveryone = true;   // Is person i known by everyone?

          // Check all other people
          for (int j = 0; j < n; j++) {
              if (i != j) { // Don't compare the person with themselves
                  // If i knows j, then i is not a celebrity
                  if (M[i][j] == 1) {
                      knowsNoOne = false;
                  }
                  // If j doesn't know i, then i is not a celebrity
                  if (M[j][i] == 0) {
                      knownByEveryone = false;
                  }
              }
              
          }
          
          // If both conditions are true, i is a celebrity
          if (knowsNoOne && knownByEveryone) {
            cout<<endl;  
            return i;
          }
      }

      // No celebrity found
      return -1;
  }
};


  void print_array_matrix(vector<vector<int>> matrix) {
    for(int i = 0; i<matrix.size(); i++) {
      for(int j = 0; j<matrix[0].size(); j++) {
        cout<<matrix[i][j]<<" ";
      }
      cout<<endl;
    }
  }

int main() {
  int n = 3;
//  vector<vector<int>> m {{0, 1, 0}, {0, 0, 0}, {0, 1, 0}};
  vector<vector<int>> m {{0, 0, 1}, {0, 0, 1}, {0, 0, 0}};
 
 Solution sol;
 print_array_matrix(m); // this line is just for my understanding
 cout<<endl;

 cout<<sol.findCelebrity(m, n);
}
