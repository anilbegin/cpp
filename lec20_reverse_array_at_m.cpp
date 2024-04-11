// lec 20, reverse the array starting from a particular location m

#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse_at_m(vector<int> v, int m) {
  int s = m + 1, e = v.size() - 1;

  while(s<=e) {
    swap(v[s], v[e]);
    s++;
    e--;
  }
  return v;
}

void arr_print(vector<int> ans) {
  for(int i = 0; i<ans.size(); i++) {
    cout<<ans[i]<<" ";
  }
}

int main() {
  vector<int> v;
  int m = 2;
  v.push_back(12);
  v.push_back(11);
  v.push_back(10);
  v.push_back(9);
  v.push_back(8);
  v.push_back(7);

  vector<int> ans = reverse_at_m(v, m);

  arr_print(ans);
}