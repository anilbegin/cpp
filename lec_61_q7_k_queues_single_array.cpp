// lec - 61
// Q7: Implement 'K' queues using an Array

#include<iostream>
using namespace std;

class kQueue {
  
  public:
  int n;  // array size
  int k;  // number of Queues
  int *front; //f front[i] points to the front index of the i-th Queue
  int *rear;
  int *arr; // actual array to store elements
  int freeSpot;
  int *next; // next[i] tells next available index (for linking or free spot)

  // constructor
  // n - size of array
  // k - number of Queues
  kQueue(int n, int k) {  
    this -> n = n;
    this -> k = k;
    front = new int[k];
    rear = new int [k];
    // initializing Front (front -> [Q1 | Q2 | Q3] values to -1) (refer notes)
    // initializing Rear (rear -> [Q1 | Q2 | Q3] values to -1) (refer notes)
    for(int i=0; i<k; i++) {
      front[i] = -1;
      rear[i] = -1;
    }
    next = new int[n];
    // update and include all values contained in next[]
    // next of each index in orignial array (refer notes/lec)
    for(int i=0; i<n; i++) {
      next[i] = i+1;
    }
    next[n-1] = -1;

    arr = new int[n];
    freeSpot = 0;
  }

  // Push
  void enqueue(int data, int qn) { // (value , queue number)
     // overflow check
     if(freeSpot == -1) {
      cout<<"No empty space is present"<<endl;
      return;
     }

     // find first free index
     int index = freeSpot;

     // update freeSpot
     freeSpot = next[index];

     // check whether first element
     if(front[qn - 1] == -1) {
      front[qn-1] = index;
     } else {
      // link new element to the previous element
      next[rear[qn-1]] = index;
     }

     // update next
     next[index] = -1;

     // update rear
     rear[qn-1] = index;

     // push element
     arr[index] = data; 

  }

  // Pop
  int dequeue(int qn) {
    // underflow // is queue already empty
    if(front[qn-1] == -1) {
      cout<<"Queue undeflow"<<endl;
      return -1;
    }

    // find index to pop
    int index = front[qn-1];

    // front ko aage badhao
    front[qn-1] = next[index];

    // freeSlot ko manage karo
    next[index] = freeSpot;
    freeSpot = index;
    
    return arr[index];
  }
};

int main() {
  kQueue k(7, 3); // array size, number of queues

  k.enqueue(10, 1);
  k.enqueue(20, 2);
  k.enqueue(11, 1);
  k.enqueue(21, 2);
  k.enqueue(31, 3);
  k.enqueue(32, 3);
  k.enqueue(34, 3);
  k.enqueue(37, 3); // no empty space is present
  
  cout<<k.dequeue(1)<<endl; // 10
  cout<<k.dequeue(1)<<endl; //  11
  cout<<k.dequeue(1)<<endl; // Queue underflow, -1
  cout<<k.dequeue(2)<<endl; // 20
  cout<<k.dequeue(2)<<endl; // 21
  cout<<k.dequeue(3)<<endl; // 31
  cout<<k.dequeue(3)<<endl; // 32
  cout<<k.dequeue(3)<<endl; // 34
  cout<<k.dequeue(3)<<endl; //Queue underflow,  -1

}
