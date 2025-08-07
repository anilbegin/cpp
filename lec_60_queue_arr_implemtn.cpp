// Lec 60:
// Implementation of Queue using Arrays
// qfront = 0 and qrear = 0 used
// Another better Solution is to keep it -1, instead of 0.
// Solution done in another file with front = rear = -1;

#include<iostream>
using namespace std;

class Queue {
  private:
    int *arr;
    int size;
    int qfront;
    int rear;
  public:
    // constructor
    Queue() {
      size = 100001;
      arr = new int[size];
      qfront = 0;
      rear = 0; 
    }

    // push data
    void enqueue(int data) {
      if(rear == size) {
        cout<<"Queue is full";
      } else {
        arr[rear] = data;
        rear++;
      }
    }

    // pop data
    int dequeue() {
      if(qfront == rear) {
        return -1;
      } else {
        int ans = arr[qfront];
        arr[qfront] = -1; // current data on front overwritten with -1
        qfront++;  // front moved to next mem location
        if(qfront == rear) { // check if queue has become empty
          qfront = 0;  // setting both front and rear to OG location
          rear = 0;
        }
        return ans; // return popped value
      }
    }

    int front() {
      if(qfront == rear) {
        return -1;
      } else {
        return arr[qfront];
      }
    }

    bool isEmpty() {
      if(qfront == rear) {
        return true;
      } else {
        return false;
      }
    }

    // func back() done by myself to experiment
    int back() {
      if(qfront == rear) {
      //  cout<<"Queue is empty";
        return -1;
      } else {
        return arr[rear-1];
      }
    }
};

int main() {
  Queue qu;
  
  qu.enqueue(10);
  qu.enqueue(11);
  qu.enqueue(12);
  qu.enqueue(13);
  qu.enqueue(17);

  cout<<"rear: "<<qu.back()<<endl;
  while(!qu.isEmpty()) {
    cout<<qu.front()<<" ";
    qu.dequeue();
  }
 
 qu.isEmpty() ? cout<<endl<<"Qeueu is Empty"<<endl : cout<<endl<<"front: "<<qu.front()<<endl;
 cout<<"front: "<<qu.front()<<" ";
 cout<<endl<<"rear: "<<qu.back()<<endl;
}
