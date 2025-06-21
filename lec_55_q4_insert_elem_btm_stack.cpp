// Q4: Insert an element at the bottom of the stack
// SOlved by Myself

#include<iostream>
#include<stack>
using namespace std;

// check remove middle elem from stack recur
// used recursion.. done myself
void insertAtBottom(stack<int>&store, int x) {
  // basecase
  if(store.empty()) {
    store.push(x);
    return;
  }

  int num = store.top();
  store.pop();

  insertAtBottom(store, x);
  store.push(num);
}

int main() {
  stack <int> st;
  int x = 9;

  st.push(10);
  st.push(11);
  st.push(12);
  st.push(13);
  st.push(14);

  // just to self check if elems exist in stack
  // while(!st.empty()) {
  //   cout<<st.top()<<" ";
  //   st.pop();
  // }

  insertAtBottom(st, x);

  while(!st.empty()) {
    cout<<st.top()<<" ";
    st.pop();
  }

}
