// lec 61: 
// Q6: Interleave First half of the Queue with second Half
// (simplest way to solve this is to use an extra Queue but...)
// requirement in Question is to only use a STACK as extra SPACE

#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void interleave(queue<int>& qu) {
  int n = qu.size()/2;
  stack<int> store;

// step 1: Put first half of Queue into Stack 
  while(n) {                  // 4 5 6
    store.push(qu.front());
    qu.pop();                 
    n--;
  }

// step 2: Put the elements in Stack back in to queue 
  while(!store.empty()) {
    qu.push(store.top());     // 4 5 6 3 2 1
    store.pop();
  }

  n = qu.size()/2;
// step : 3  Put the current first half to rear of Queue
  while(n) {
    qu.push(qu.front());    // 3 2 1 4 5 6
    qu.pop();
    n--;
  }

  n = qu.size()/2;
// step : 4  put the current first half of queue into stack 
  while(n) {
    store.push(qu.front()); // 4 5 6
    qu.pop();
    n--;
  }

// step : 5  now we can alternatively push ..
// .. element from stack into queue..
// .. element from front of queue to itself.  
  while(!store.empty()) {
    qu.push(store.top());
    store.pop();
    qu.push(qu.front());
    qu.pop();
  }

}

int main() {
 queue<int> qu;

 qu.push(1);
 qu.push(2);
 qu.push(3);
 qu.push(4);
 qu.push(5);
 qu.push(6);
 qu.push(7);
 qu.push(8);

 interleave(qu); 

 while(!qu.empty()) {
  cout<<qu.front()<<" ";
  qu.pop();
 }
}