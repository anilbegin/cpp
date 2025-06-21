// lec 55 Q2: Delete Middle Element from stack

#include<iostream>
#include<stack>
using namespace std;

//uses recursion
void solve(stack<int>&inputStack, int count, int size) {
  // basecase
  if(count == size/2) {
    inputStack.pop();
    return;
  }
  // save the current top element..
  // .. that have to be later put back after removing the Middle element
  int num = inputStack.top();
  inputStack.pop();

  //next recursive call
  solve(inputStack, count+1, size);

  // returning back from the next recursive call
  // we need to put back the value that was saved in 'num'
  inputStack.push(num);
}

void deleteMiddle(stack<int>&inputStack, int N) {
  int count = 0;
  solve(inputStack, count, N);
}

int main() {
 stack <int> st;

 st.push(10);
 st.push(11);
 st.push(12); // middle element
 st.push(13);
 st.push(14);

 // below while cond, to check elems in stack
//  while(!st.empty()) {
//   cout<<st.top()<<" "; // 14 13 12 11 10
//   st.pop();
//  }


  deleteMiddle(st, 5);  // should delete mid elem '12' from stack

  // below while cond, to check elems in stack
  while(!st.empty()) {
    cout<<st.top()<<" ";  // 14 13 11 10
    st.pop();
  }

}

