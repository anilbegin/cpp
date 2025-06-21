// lec 55: Q3 - check if valid parenthesis

#include<iostream>
#include<stack>
using namespace std;

bool matches(char top, char ch) {
  
  if(top == '(' && ch == ')' || 
    top == '{' && ch == '}' || 
    top == '[' && ch == ']' ) {
      return true;
    } else {
      return false;
    }
}

bool isValidParenthesis(string expression) {
  stack <char> s;

  for(int i = 0; i<expression.length(); i++) {
    char ch = expression[i];

    // if opening bracket then push into stack
    // if closing bracket then compare with top stack, true then pop-stack.
    if(ch == '(' || ch == '{' || ch == '[') {
      s.push(ch);
    } else {
      // for closing bracket
      if(!s.empty()) {  // this check is important to avoid stack underflow.. 
                        //..error, so, if stack is empty and you try to save 'char top'
                        //.. when there is already nothing in s.top() then there will be error
        char top = s.top(); // opening brac at top of stack
        if(matches(top, ch)) { // top: opening brac, ch: closing brac
          s.pop();
        } else {
          return false;
        }
      } else {
        return false;
      }
    }
  }

  if(s.empty()) {
    return true;
  } else {
    return false;
  }
}

int main() {
  string expression = "([{([])}])";

  isValidParenthesis(expression) ? cout<<"balanced" : cout<<"not balanced";

}
