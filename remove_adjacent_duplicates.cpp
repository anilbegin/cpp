// remove all adjacent duplicates in a string

#include<iostream>
using namespace std;

string remove_adjacent_duplicates(string str) {
  string ans;

  // using range based for loop
  // here "auto", means we are saying to the compiler.. you pick the data-type
  for(auto ch : str) {
    if(ch == ans.back()) {
      ans.pop_back();
    } else {
      ans.push_back(ch);
    }
  }
  return ans;
}

int main() {
  string str = "abbaca";

  cout<<remove_adjacent_duplicates(str);
}
