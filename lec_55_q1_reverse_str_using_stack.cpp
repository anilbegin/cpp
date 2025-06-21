// Lec 55 - 
// Q1 : Reverse a string using Stack

#include<iostream>
#include<stack>
using namespace std;

int main() {
  string str = "elephant";

  stack <char> s;

  for(int i = 0; i<str.length(); i++) {
    char ch = str[i];
    s.push(ch);
  }

  string ans = "";

  while(!s.empty()) {
    char ch = s.top();

    ans.push_back(ch);
    s.pop();
  }

  cout<<"answer is: " <<ans<<endl;
  
  return 0;

}

/*
// better Alternative Code
string reverse_string(string str) {
   stack<char> store;

  for(char ch : str) store.push(ch); // range based for loop
  
  string ans = "";
  
  while(!store.empty()) {
    char ch = store.top();
    ans.push_back(ch);
    store.pop();
  }
  return ans;
}
*/