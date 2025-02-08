// Circular linked list (based on SIngly LL)
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
    newNode -> next = newNode; // because its a CLL, a Single existing Node will point to itself
  } else {
    // non-empty list
    // assuming that the element is present in the list
    
    Node* curr = tail;

    while(curr -> data != element) {
      curr = curr -> next;
    //  cout<<"-"<<curr-> data<<"-"; // debugging track val of 'curr';
    // below if section checks if the 'element' value is existing or not.
    // exits out of function if element not found.
    // curr == tail CHECK is reached when the the Whole LL is searched for the element..
    // but it was nowhere to be found, so curr has reached back to TAIL again
      if(curr == tail) { // this 'if' section included by myself, not by CodeHelp
        cout<< "element " << element << " not found in the LL" << endl;
        return;
      }
    }
    
    // element found -> current is representing element wala node
    // now .. next step
    Node* temp = new Node(data);
    temp -> next = curr -> next;
    curr -> next = temp;
  }
}

// delete a Node based on the Value to be deleted
void deleteNode(Node* &tail, int value) {
  // empty list
  if(tail == NULL) {
    cout<< " List is empty, please check again ";
  } else { //non empty case
    // ASSUMING THAT THE "value" is PRESENT IN THE LINKED LIST
    // in previous LL cases we were poiting 'prev' to NULL
    // but in CLL we are pointing prev to TAIL
    Node* prev = tail;
    Node* curr = prev -> next;

    while(curr -> data != value) {
      prev = curr;
      curr = curr -> next;
      if(prev == tail) { // traversed through once, but value not found // done by myself
        cout<<"value not found, please check." << endl;
        return;
      }
    }

    prev -> next = curr -> next;

    // 1 node CLL
    if(curr == prev) { // if there is no only one Node, and we are deleting it
      tail = NULL;
    }

    // below section applicable for >= 2 Nodes CLL
    else if(tail == curr) { // if the node we are DELETING is TAIL.
      tail = prev;
    }
    curr -> next = NULL;
    delete curr;
  }
}

// traversing through the CLL
void print(Node* tail) {
  Node* temp = tail;

  // if the CLL is empty
  if(tail == NULL) {
    cout<< " list is empty " <<endl;
    return;
  }

  do {
    cout<< tail -> data << " ";
    tail = tail -> next;
  } while(tail != temp);
  cout<<endl;
}

int main() {
  Node* tail = NULL;

  // inserting in empty list (insertNode (tail, searchElement, dataToBeInsertedNextToElement))
  // insertNode(tail, 5, 3); // since its an empty list, there is no point of searchin for 5..
  //                         // .. so insert data '3' as the TAIL
  // print(tail);

  // insertNode(tail, 3, 5);
  // print(tail);

  // insertNode(tail, 5, 7);
  // print(tail);

  // insertNode(tail, 1, 9);
  // print(tail);
  // // //
  // insertNode(tail, 5, 6);
  // print(tail);

  insertNode(tail, 3, 4);
  print(tail);

  deleteNode(tail, 3);
  print(tail);

  cout<< "tail: " << tail -> data <<endl;
}
