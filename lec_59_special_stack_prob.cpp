// Lec:59 - design a special stack problem

#include<iostream>
#include<stack>
using namespace std;

class SpecialStack {
  stack<int> store;
  int mini;

  public:
  void push(int curr) {
    if(store.empty()) { // first elem being pushed
      store.push(curr);
      mini = curr;
    } else if(curr < mini) {
      int val = 2*curr - mini;
      store.push(val);
      mini = curr;
    } else {
      store.push(curr);
    }
  }

  int pop() {
    if(store.empty()) {
      return -1;
    }
    int curr = store.top();
    store.pop();
    
    if(curr < mini) {
      int prevMin = mini;
      int val = 2*mini - curr;
      mini = val;
      return prevMin;
    } else {
      return curr;
    }
  }

  int top() {
    if(store.empty()) {
      return -1;
    }
    int curr = store.top();
    if(curr < mini) {
      return mini;
    } else {
      return curr;
    }
  }

  bool isEmpty() {
    return store.empty();
  }

  int getMin() {
    if(store.empty()) return -1;

    return mini;
  }
};

int main() {
 SpecialStack st;

 st.push(5);
 st.push(3);
 st.push(8);
 st.push(2);
 st.push(4);

 cout<<"min: "<<st.getMin()<<endl; 

 cout<<"top: "<<st.top()<<endl;
 cout<<"pop: "<<st.pop()<<endl;

 cout<<"min: "<<st.getMin()<<endl; 


 cout<<"top: "<<st.top()<<endl;
 cout<<"pop: "<<st.pop()<<endl;

 cout<<"min: "<<st.getMin()<<endl; 
 
 cout<<"top: "<<st.top()<<endl;
 cout<<"pop: "<<st.pop()<<endl;

 cout<<"top: "<<st.top()<<endl;
 cout<<"min: "<<st.getMin()<<endl; 
 cout<<"pop: "<<st.pop()<<endl;

 cout<<"min: "<<st.getMin()<<endl; 
 cout<<"pop: "<<st.pop()<<endl;

 cout<<"top: "<<st.top()<<endl;

}
