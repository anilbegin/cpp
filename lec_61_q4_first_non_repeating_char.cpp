// Lec:61, Q - 4 : First Non repeating character in a string 

#include<iostream>
#include<queue>
#include<unordered_map>
using namespace std;

class Solution {
  public:
    string firstNonRepeating(string A) {
      unordered_map<char, int> count;
      queue<int> q;
      string ans = "";

      for(int i = 0 ;i<A.length(); i++) {
        char ch = A[i];

        // increase count
        count[ch]++; // maintain count of characters
        q.push(ch);
        
        while(!q.empty()) {
          if(count[q.front()] > 1) {
            // repeating character
            q.pop();
          } else {
            ans.push_back(q.front());
            break;
          }
        }
        if(q.empty()) ans.push_back('#');
      }
      return ans;
    }
};

int main() {
//  string A = "aabc";    // a#bb
//  string A = "abcabcabc";   // aaabc####
//  string A = "abbaccd";   // aaa#c#d
  string A = "abcaccd"; // aaabbbb  

  Solution sol;

  cout<<sol.firstNonRepeating(A);
}

