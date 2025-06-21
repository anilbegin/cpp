// Q5: Reverse a stack using recursion

#include<iostream>
#include<stack>
using namespace std;

// check remove middle elem from stack recur, for reference
// used recursion.. done myself
// add algo for put value 'X' at the bottom of the list..
// .. that algo pushes element 'num' to bottom on each unwinding of recursive call
// Solved by Myself
void pushNumToBtm(stack<int>&store, int x) {
  if(store.empty()) {
    store.push(x);
    return;
  }

  int num = store.top();
  store.pop();

  pushNumToBtm(store, x);
  store.push(num);
}

void reverseStack(stack<int>&store) {
  if(store.empty()) return;
  
  int num = store.top();
  store.pop();

  reverseStack(store);
  // Now when we reach the base case ..
  // .. and move back up the call stack ..
  // we start with the below function, which will push each "num" value...
  // to the bottom, at each step of unwinding the recrusion.
  pushNumToBtm(store, num); 
}

int main() {
  stack <int> st;
  int x = 9;

  st.push(10);
  st.push(11);
  st.push(12);
  st.push(13);
  st.push(14);

  //just to self check if elems exist in stack
  // while(!st.empty()) {
  //   cout<<st.top()<<" ";
  //   st.pop();
  // }   // OP : 14 13 12 11 10 

  reverseStack(st);

  while(!st.empty()) {
    cout<<st.top()<<" ";
    st.pop();
  } // OP : 10 11 12 13 14

}
