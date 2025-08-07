// Lec 61: Q3- reverse first K elements of Queue
// Solution by myself

#include<iostream>
#include<queue>
#include<stack>
using namespace std;

queue<int> modifyQueue(queue<int> qu, int k) {
  stack<int> store;
  int r = qu.size() - k;  // n - k elements for 3rd while loop

  // push k elements to stack, pop them from the queue
  while(k) {              
    store.push(qu.front());
    qu.pop();
    k--;
  }
  
  // push elements in stack to rear of queue.
  while(!store.empty()) {
    qu.push(store.top());
    store.pop();
  }
  
  // push the remaining n - k elements to rear of reversed queue.
  while(r) {
    qu.push(qu.front());
    qu.pop();
    r--;
  }

  return qu;
}

int main() {
  queue<int> qu;
  int k = 3;

  qu.push(1);
  qu.push(2);
  qu.push(3);
  qu.push(4);
  qu.push(5);

  qu = modifyQueue(qu, k);

  while(!qu.empty()) {
    cout<<qu.front()<<" ";
    qu.pop();
  }
}
 