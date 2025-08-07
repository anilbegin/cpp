// Lec: 61 : Q1 - Queue reversal
//  1st method - using recursion bymyself
// 2nd method using Stack - done refering Codehelp

#include<iostream>
#include<queue>
#include<stack>
using namespace std;

// uses recursion (done by myself)
// T.C - O(n)  , S.C - O(n)
// when analyzing space complexity for recursive functions,
// we must include the call stack used by the function calls.
void rev(queue<int>& q) {
  if(q.empty()) return;

  int num = q.front();
  q.pop();

  rev(q);
  q.push(num);
}

// uses Stack (refered codehelp, but done myself)
// T.C - O(n) , S.C - O(n)
queue<int> revUseStack(queue<int> q) {
  stack<int> store;
  while(!q.empty()) {
    store.push(q.front());
    q.pop();
  }

  while(!store.empty()) {
    q.push(store.top());
    store.pop();
  }
  return q;
}

int main() {
  queue<int> qu;

  qu.push(4);
  qu.push(3);
  qu.push(1);
  qu.push(10);
  qu.push(2);
  qu.push(6);

  // uses recursion
//  rev(qu);
    // while(!qu.empty()) {
    //   cout<<qu.front()<<" ";
    //   qu.pop();
    // }

  // uses Stack  
queue<int> newQ = revUseStack(qu); 
while(!newQ.empty()) {
       cout<<newQ.front()<<" ";
       newQ.pop();
     }
}
