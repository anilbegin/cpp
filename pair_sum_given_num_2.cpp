// CODEHELP SOLn
// Pair sum Codehelp SOln (LeetCode question & the given conditions)
// each pair should be sorted - 1st value shud be less than 2nd value.
// return list of pairs in the non decreasing order of their first value.
// in case the two pairs have he same first value, the pair with smaller second..
// .. value should come first.
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> sum_pair(int arr[], int size, int x) {
  vector<vector<int>> ans;
  for(int i = 0; i< size; i++) {
    for(int j = i + 1 ; j<size; j++) {
      if(arr[i] + arr[j] == x) {
        vector<int> temp;
        temp.push_back(min(arr[i], arr[j]));
        temp.push_back(max(arr[i], arr[j]));
        ans.push_back(temp);
      }
    }
  }
  sort(ans.begin(), ans.end());
  return ans;
}

int main() {
  int x = 9;
  int arr[] = {3, 6, 4, 7, 8, 5, 2, 1};

  int size = sizeof(arr)/sizeof(arr[0]);

  vector<vector<int>> ans = sum_pair(arr, size, x); 

  // a new concept containing Vector of Vectors
  // vector<vector<int>> var;
  // Displaying the 2D vector 
    for (int i = 0; i < ans.size(); i++) { 
        for (int j = 0; j < ans[i].size(); j++) 
            cout << ans[i][j] << " "; 
        cout << endl; 
    } 

}
 