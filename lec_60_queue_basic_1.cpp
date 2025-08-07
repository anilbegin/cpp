// Lec 60 : Queues in C++

#include<iostream>
#include<queue>
using namespace std;

int main() {
  queue<int> q;
  q.push(10);
  q.push(11);
  q.push(12);
  q.push(13);
  q.push(14);

  cout<<"size: "<<q.size()<<endl;
  cout<<"front (value) : " <<q.front()<<endl; // 10
  cout<<"back (value) : " <<q.back()<<endl;   // 14

  q.empty() ? cout<<"queeu is empty"<<endl : cout<<"queue is not Empty"<<endl;

  q.pop();
  cout<<"front (value) - after pop - : " <<q.front()<<endl; // 11
  cout<<"back (value) - after pop - : " <<q.back()<<endl;   // 14
}
