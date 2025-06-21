// lec 55: Q6: part1(of sorting an unsorted stack) - sortedInsert
// step - 1
// Q - insert a value X in its correct place in a given sorted stack.

#include<iostream>
#include<stack>
using namespace std;

// using recursion
void sortedInsert(stack<int>&store, int x) {
  if(store.empty() || x >= store.top()) {
    store.push(x);
    return;
  }

  int num = store.top();
  store.pop();

  sortedInsert(store, x);
  store.push(num);
}

int main() {
  stack<int> st;
  int x = 5;

  st.push(4);
  st.push(6);
  st.push(7);
  st.push(10);

  sortedInsert(st, x);  

  while(!st.empty()) {
    cout<<st.top()<<" ";
    st.pop();
  }
}
