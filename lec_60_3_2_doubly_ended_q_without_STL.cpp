// Lec 60 : 3 - 
// Doubly Ended Queue - without using STL

#include<iostream>
#include<queue>
using namespace std;

class Deque {
  int *arr;
  int size;
  int front;
  int rear;
  public:
  // constructor
  Deque(int n) {
    size = n;
    arr = new int[size];
    front = -1;
    rear = -1;
  }

  bool pushFront(int x) {
    if((front == 0 && rear == size - 1) || (rear + 1)%size == front) {
      // Queue is full
      return false;
    }

    if(front == -1) {
      front = rear = 0;
    } else if(front == 0 && rear != size - 1) {
      front = size - 1;
    } else { // normal flow
      front--;
    }
    arr[front] = x;
    return true;

  }

  bool pushRear(int x) {
    if((front == 0 && rear == size - 1) || (rear + 1)%size == front) {
      // Queue is full
      return false;
    }

    if(front == -1) {
      front = rear = 0;
    } else if(rear = size - 1 && front != 0) {
      rear = 0;
    } else {  // normal flow
      rear++;
    }
    arr[rear] = x;
    return true;
  }

  int popFront() {
    if(front == -1) return -1; // empty Queue
    int num = arr[front];
    arr[front] = -1;
    if(front == rear) { // only one element in queue
      front = rear = -1;
    } else if(front == size - 1) {
      front = 0;  
    } else {
      front++;
    }
    return num;
  }

  int popRear() {
    if(front == -1) return -1;
    int num = arr[rear];
    arr[rear] = -1;
    if(front == rear) {
      front = rear = -1;
    } else if(rear == 0 && front != 0) { // maintain cyclic nature
      rear = size - 1;
    } else {
      rear--;
    }
    return num;
  }

  int getFront() {
    if(front == -1) return -1; // check if Queue is empty
    return arr[front];
  }

  int getRear() {
    if(rear == -1) return -1;
    return arr[rear];
  }

  bool isEmpty() {
    if(front == -1) {
      return true;
    } else {
      return false;
    }
  }

  bool isFull() {
    if((front == 0 && rear == size - 1) || (rear + 1)%size == front ) {
      return true;
    } else {
      return false;
    }
  }
};

int main() {
  Deque dq(5);

  dq.pushFront(10);
  dq.pushRear(21);
  dq.pushFront(12);
  dq.pushFront(13);
  dq.pushFront(15);

  //   while(!dq.isEmpty()) {
  //   cout<<dq.getFront()<<" "; [ 15, 13, 12, 10, 21 ]
  //   dq.popFront();
  // }
  dq.isFull() ? cout<<"Queue Full"<<endl : cout<<"not full"<<endl;
  dq.isEmpty() ? cout<<"Queue is Empty"<<endl : cout<<"not Empty"<<endl;

  cout<<dq.pushFront(16)<<endl;  // 16 front push fail !
  cout<<dq.pushFront(18)<<endl;  // 18 front push fail !

  cout<<dq.popRear()<<endl; // 21 popped from rear 
  dq.isFull() ? cout<<"Queue Full"<<endl : cout<<"not full"<<endl;

  cout<<dq.pushFront(18)<<endl; // 18 - push front
  cout<< dq.getFront() <<endl; //  18
  cout<<dq.pushRear(23)<<endl;  // 23 - rear failed ! mem full

  cout<< dq.popRear() <<endl;   // 10 - popped rear
  cout<< dq.getRear() <<endl;   // 12
  cout<<dq.pushRear(24)<<endl;  // 24 - pushed on Rear 

  
  while(!dq.isEmpty()) {
    cout<<dq.getFront()<<" "; // [18, 15, 13, 12, 24]
    dq.popFront();
  }
  cout<<endl;
  dq.isFull() ? cout<<"Queue Full"<<endl : cout<<"not full"<<endl;
  dq.isEmpty() ? cout<<"Queue is Empty"<<endl : cout<<"not Empty"<<endl;  
}
