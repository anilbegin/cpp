// revise lecture 20: reverse the array after index M

#include<iostream>
#include<vector>
using namespace std;

vector<int> array_reverse(vector<int> v, int m) {
  int s = m + 1, e = v.size() - 1;

  while(s<=e) {
    swap(v[s], v[e]);
    s++;
    e--;
  }
  return v;
}

void new_array_print(vector<int> ans) {
  for(int i = 0; i<ans.size(); i++) {
    cout<<ans[i]<<" ";
  }
}

int main() {

  vector<int> v;
  int m = 2;
  v.push_back(122);
  v.push_back(121);
  v.push_back(120);
  v.push_back(19);
  v.push_back(18);
  v.push_back(17);
  v.push_back(16);

  vector<int> ans = array_reverse(v, m);

  cout<<"reversed array is: ";

  new_array_print(ans);
}