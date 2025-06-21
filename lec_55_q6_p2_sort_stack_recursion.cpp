// lec 55: Q6 : sort a stack using recursion
// step 2: 
// add the Q6 part 1 - sortedInsert function here to solve this problem
// solved by myself.

#include<iostream>
#include<stack>
using namespace std;

// we use an addition function sorted insert..
// .. which is a Question in itself 
// Q for sortedInsert()
// insert value 'X' in its correct place..
// .. inside a given sorted Stack.
void sortedInsert(stack<int>&store, int x) {
  // basecase
  if(store.empty() || x >= store.top()) {
    store.push(x);
    return;
  }

  int num = store.top();
  store.pop();

  sortedInsert(store, x);
  store.push(num);
}

// we add the above recursive func, to solve..
// .. a given unsorted stack
void sortStack(stack<int>&store) {
 // basecase
 if(store.empty()) return;

 int num = store.top();
 store.pop();

 sortStack(store);
 sortedInsert(store, num);
}

int main() {
 stack<int> st;
 

 st.push(3);
 st.push(-7);
 st.push(9);
 st.push(-2);
 st.push(5);

 sortStack(st);
 
  while(!st.empty()) {
    cout<<st.top()<<" ";
    st.pop();
  }

}
