// Implementation of Queue without using STL
// front = rear = -1; // this is a better solution.. instead of..
// keeping front = rear = 0;

#include<iostream>
using namespace std;

class Queue {
  int *arr;
  int size;
  int front;
  int rear;
  public:
  // constructor
  Queue() {
    size = 5;
    arr = new int[size];
    front = -1;
    rear = -1;
  }
  
  // destructor (suggested by CGPT in general)
  ~Queue() {
    delete[] arr;
  }
		
  void enqueue(int data) {
    // check if Queue is full
    if(rear == size - 1) {
      cout<<"Queue is full";
	return;
    } else if(rear == -1) { // elem pushed 1st time
      front = rear = 0;
    } else { // normal push
      rear++;
    }
    arr[rear] = data;
  }

  int dequeue() {
    // check if the Queue is empty
    if(front == -1) {
      return -1;
    } 
    int num = arr[front];
    arr[front] = -1;
    if(front == rear) {
      front = rear = -1;
    } else {
      front++;
    }
    return num;
  }

  int qfront() {
    if(front == -1) { // Queue is empty
      return -1;
    }

    return arr[front];
  }

   int qrear() {
    if(rear == -1) { // Queue is empty
      return -1;
    }

    return arr[rear];
  }

  bool isEmpty() {
    if(front == -1) {
      return true;
    } else {
      return false;
    }
  }
};

int main() {
 Queue qu;

 qu.enqueue(10);
 qu.enqueue(12);
 qu.enqueue(14);
 qu.enqueue(15);
 qu.enqueue(16);
 
 qu.isEmpty() ? cout<<"Queue is empty"<<endl : cout<<"NOT EMPTY!"<<endl;

  cout<<"rear: "<<qu.qrear()<<endl;
  cout<<"front: "<<qu.qfront()<<endl; 

 cout<<"popped: "<<qu.dequeue()<<endl;
 cout<<"popped: "<<qu.dequeue()<<endl;
 cout<<"popped: "<<qu.dequeue()<<endl;
 cout<<"popped: "<<qu.dequeue()<<endl;
 cout<<"popped: "<<qu.dequeue()<<endl;
 cout<<"popped: "<<qu.dequeue()<<endl;
 cout<<"popped: "<<qu.dequeue()<<endl;
 //qu.enqueue(17);

 cout<<endl<<"front: "<<qu.qfront()<<endl;
 cout<<"rear: "<<qu.qrear()<<endl;
 
 qu.isEmpty() ? cout<<"Queue is empty"<<endl : cout<<"NOT EMPTY!"<<endl;
}
