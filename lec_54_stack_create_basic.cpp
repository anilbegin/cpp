// lec 54: 
// stack without using STL, we will be using array data structure
// operations - push pop empty top ...

#include<iostream>
using namespace std;

// Create a Stack Class, with array data structure
class Stack {
  // properties
  public:
    int *arr; // array for storing value
    int top;  // represents how much the stack is filled
    int size; // size of the stack (array)
    
  // behavior
  Stack(int size) {
    this -> size = size;
    arr = new int[size]; // array with 'size' created dynamically
    top = -1;
  }

  void push(int element) {
    if(size - top > 1) {
      top++;
      arr[top] = element;
    } else {
      cout<<"stack overflow" <<endl;
    }
  }

  void pop() {
    if(top >= 0) {
      top--;
    } else {
      cout<<"Stack Underflow" <<endl;
    }
  }

  int peek() {
    if(top >= 0) {
      return arr[top];
    } else {
      cout<<"stack is empty" <<endl;
      return -1;
    }
  }

  bool isEmpty() {
    if(top == -1) {
      return true;
    } else {
      return false;
    }
  }
};

int main() {
  Stack st(5);

  st.push(22);
  st.push(43);
  st.push(44);
  
  cout<<st.peek();
}
