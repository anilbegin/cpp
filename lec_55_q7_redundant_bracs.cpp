// lec:55- Q7: redundant brackets
// done by myself after refering lecture twice

#include<iostream>
#include<stack>
using namespace std;

bool findRedundantBrackets(string &str) {
  stack<char> store;
  for(int i = 0; i<str.length(); i++) {
    char ch = str[i];
    if(ch == '(' || ch == '+' || ch == '-' || ch == '/' || ch == '*') {
      store.push(ch);
    } else {
      if(ch == ')') {
        bool isRedundant = true; // if we directly reach '(' in stack, then .. 
                                 // .. isRedundant stays true.         
        while(!store.empty() && store.top() != '(') { // pop out each operator till before ')'
          char top = store.top();
          if(top == '+' || top == '-' || top == '/' || top == '*') {
            isRedundant = false;
          }
          store.pop();
          // if the stack does not have a '(' when inside while loop
          // condition added by myself
          if(store.empty()) return true;
        }
        if(isRedundant == true) return true;
        store.pop();
      }
    }
  }
  return false;
}

int main() {
//  string str = "(a+c - b) + c)"; // if(store.empty()) cond added for this scenario
//  string str = "(a+c*b+c))"; // while(!store.empty() added for this
//  string str = "(a+b))";
//string str = "((a+b)+c-b + (a/b))";
  string str = "(a*b + (c/d))";
  findRedundantBrackets(str) ? cout<<"Yes Redundant" : cout<<"NO";
}

/* // Another alterantive Soln, cross check later
bool findRedundantBrackets(string& str) {
  stack<char> store;
  for(int i = 0; i<str.length(); i++) {
    char ch = str[i];
    if(ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/') {
      store.push(ch);
    } else {
      if(ch == ')') {
        bool redundant = true;
        while(!store.empty() && store.top() != '(') {
          char top = store.top();
          if(top == '+' || top == '-' || top == '*' || top == '/') {
            redundant = false;
          }
          store.pop();
        }
        if(redundant == true) return true; // this line reached when no OPertr present between '(' and ')'
        store.pop(); // this line reached when redundant becomes 'false'
      }
    }
  }
  // below if-cond: if still there is some '(' and '+' remaining in stack
  // eg-case: "((a+b) + (c+b)"
  if(!store.empty()) return true; 
  return false; // nothing remaining in stack;
}
*/