// Lec:54 : introduction to Stacks
// 1
#include<iostream>
#include<stack>
using namespace std;

int main() {
  stack <int> s;

  s.push(1);
  s.push(2);
  s.push(3);
  s.pop(); //  data: '3' is popped out, now '2' is the top element
  cout<<"printing top element in the stack: " << s.top() <<endl;  // 2
  s.push(4);
  cout<<"printing top element in the stack: " << s.top() <<endl;  // 4
  cout<<"size of stack: " <<s.size()<<endl; // size:3, element: 1, 2, 4
  s.pop(); // data: '4' is popped out
  s.pop(); // data: '2' is popped out
  cout<<"printing top element in the stack: " << s.top() <<endl;  // 1
  s.empty() ? cout<<"stack is empty" : cout<< "stack is not empty";
  // the only element remaining in stack is '1'.
  cout<<endl;
  cout<<"size of stack: " <<s.size()<<endl; 
}

