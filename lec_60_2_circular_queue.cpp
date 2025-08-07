// Lec 60 : 2 - 
// Implementation of Circular Queue without using STL

#include<iostream>
using namespace std;

class CircularQueue {
  int *arr;
  int front;
  int rear;
  int size;
  public:
  // constructor
  CircularQueue(int n) {
    size = n;
    arr = new int[size];
    front = rear = -1;
  }

  bool enqueue(int value) {
    // check if queue is already full
    if((front == 0 && rear == size - 1) || ((rear + 1) % size == front)) {
      cout<<"Queue is full";
      return false;
    } else if(front == -1) { // first time element to push
      front = rear = 0;
    //  arr[rear] = value;
    } else if(rear == size - 1 && front != 0) {
      rear = 0;
    //  arr[rear] = value;
    } else {
      rear++;
    //  arr[rear] = value;
    }
    arr[rear] = value;
    return true;
  }

  int dequeue() {
    if(front == -1) {
      cout<<"Queue is empty"<<endl;
      return -1;
    } 
    
    int ans = arr[front];
    arr[front] = -1;
    if(front == rear) {// only 1 elem in Queue
      // int ans = arr[front];
      // arr[front] = -1;
      front = rear = -1;
    //  return ans;
    } else if(front == size - 1) { // front is in last mem block, rear is somewher
      // int ans = arr[front];
      // arr[front] = -1;
      front = 0;
    //  return ans;
    } else { // normal
      front++;
    //  return ans;
    }
    return ans;
  }
};

int main() {
 CircularQueue cq(5);

 cq.enqueue(10) ? cout<<"Success"<<endl : cout<<" :FAIL !!"<<endl;
 cq.enqueue(11) ? cout<<"Success"<<endl : cout<<" :FAIL !!"<<endl;
 cq.enqueue(12) ? cout<<"Success"<<endl : cout<<" :FAIL !!"<<endl;
 cq.enqueue(13) ? cout<<"Success"<<endl : cout<<" :FAIL !!"<<endl;
 cq.enqueue(14) ? cout<<"Success"<<endl : cout<<" :FAIL !!"<<endl;
 
 cout<<cq.dequeue()<<endl; // 10 popped
 cout<<cq.dequeue()<<endl; // 11 popped 
 cq.enqueue(16) ? cout<<"Success"<<endl : cout<<" :FAIL !!"<<endl;
 cq.enqueue(18) ? cout<<"Success"<<endl : cout<<" :FAIL !!"<<endl;
 cq.enqueue(19) ? cout<<"Success"<<endl : cout<<" :FAIL !!"<<endl;
 
}
