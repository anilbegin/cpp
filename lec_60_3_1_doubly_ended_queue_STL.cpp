// Lec 60 : 3 - 
// STL - Doubly Ended Queue -

#include<iostream>
#include<queue>
using namespace std;

int main() {
  deque<int> dq;

  dq.push_back(10);
  dq.push_back(12);
  dq.push_back(13);
  dq.push_back(14);

  dq.push_front(21);
  dq.push_front(22);

  cout<<"front: "<<dq.front()<<endl;    // 22
  cout<<"back: "<<dq.back()<<endl;      // 14

  dq.pop_front();

  cout<<"front: "<<dq.front()<<endl;  // 21
  cout<<"back: "<<dq.back()<<endl;    // 14

  dq.pop_back();

  cout<<"front: "<<dq.front()<<endl;    // 21
  cout<<"back: "<<dq.back()<<endl;      // 13
}
