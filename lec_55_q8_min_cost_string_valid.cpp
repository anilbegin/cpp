// lec 55: Q8 : Min Cost to make String Valid 

#include<iostream>
#include<stack>
using namespace std;

int findMinimumCost(string str) {
  // step -1
  // odd condition
  if(str.length()%2 == 1) return -1;

  // step - 2
  stack<char> s;
  for(int i = 0; i<str.length(); i++) {
    char ch = str[i];
    if(ch == '{') {
      s.push(ch);
    } else { // 'ch' is closed brace
      if(!s.empty() && s.top() == '{') {
        s.pop();
      } else {
        s.push(ch);
      }
    }
  }
  // now stack contains all the invalid braces
  int a = 0, b = 0;
  // b = count for open braces
  // a = count for closed braces
  while(!s.empty()) {
    if(s.top() == '{') {
      b++;
    } else {
      a++;
    }
    s.pop();
  }
  int ans = (a+1)/2 + (b+1)/2;
  return ans;
}

int main() {
  string str = "}}{{{{";
  
  cout<<findMinimumCost(str);

}
