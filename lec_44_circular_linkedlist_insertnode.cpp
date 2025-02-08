// Circular linked list
// In CLL We don't need a head pointer, we just need a TAIL pointer
#include<iostream>
using namespace std;

class Node {
  public:
    int data;
    Node* next;
  // constructor
  Node(int data) {
    this -> data = data;
    this -> next = NULL;
  }  
  // destructor
  ~Node() {
    int val = this -> data;
    if(this -> next != NULL) {
      delete next;
      this -> next = NULL;
    }
    cout<< "memory is free for node with data " << val <<endl;
  }
};

// if tail = NULL, then its empty list
// element - is the value next to which new node is to be placed
// data - this is the data for which new node is to be created
void insertNode(Node* &tail, int element, int data) {
  
  
  //empty list
  if(tail == NULL) {
    Node* newNode = new Node(data);
    tail = newNode;
    newNode -> next = newNode;
  } else {
    // non-empty list
    // assuming that the element is present in the list
    
    Node* curr = tail;

    while(curr -> data != element) {
      curr = curr -> next;
    }

    // element found -> current is representing element wala node
    // now .. next step
    Node* temp = new Node(data);
    temp -> next = curr -> next;
    curr -> next = temp;
  }
}

// traversing through the CLL
void print(Node* tail) {
  Node* temp = tail;

  do {
    cout<< tail -> data << " ";
    tail = tail -> next;
  } while(tail != temp);
  cout<<endl;
}

int main() {
  Node* tail = NULL;

  // inserting in empty list (insertNode (tail, searchElement, dataToBeInsertedNextToElement))
  insertNode(tail, 5, 3); // since its an empty list, there is no point of searchin for 5..
                          // .. so insert data '3' as the TAIL
  print(tail);

  insertNode(tail, 3, 5);
  print(tail);

  insertNode(tail, 5, 7);
  print(tail);

  insertNode(tail, 7, 9);
  print(tail);
  //
  insertNode(tail, 5, 6);
  print(tail);

  insertNode(tail, 3, 4);
  print(tail);
}
