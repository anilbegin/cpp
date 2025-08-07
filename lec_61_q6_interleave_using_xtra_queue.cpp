// lec 61: Q6 - 
// Q: Interleave First half of the Queue with second Half
// CODEHELP explained the below Soln conceptualy, I did the coding
// the actual requirement is to only use a STACK as extra SPACE

#include <iostream>
#include<queue>
using namespace std;

void interleaveQueue(queue<int>& qu) {
  queue<int> xqu;
  int half = qu.size()/2;

  // push first half of qu into xqu.
  while(qu.size() != half) {
    xqu.push(qu.front());
    qu.pop();
  }

  // push 1 num of xqu, then push 1 num of qu.front() till xqu.empty()
  while(!xqu.empty()) {
    qu.push(xqu.front());
    xqu.pop();
    qu.push(qu.front());
    qu.pop();
  }
}

int main() {
 queue<int> qu;

 qu.push(11);
 qu.push(12);
 qu.push(13);
 qu.push(14);
 qu.push(15);
 qu.push(16);
 
 interleaveQueue(qu);

 while(!qu.empty()) {
  cout<<qu.front()<<" ";
  qu.pop();
 }
}
 