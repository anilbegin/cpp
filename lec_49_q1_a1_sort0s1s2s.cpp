// Lec:49 - 
// Sort 0s 1s and 2s in LinkedList : Approach 1
#include<iostream>
#include<map> // header needed for using maps
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
    cout<<"memory for ndoe with value "<< val << " has been erased." <<endl;
  } 
};
// sll
void insertAtHead(Node* &head, Node* &tail, int data) {
    Node* temp = new Node(data);
    if(head == NULL) {
      head = temp;
      tail = temp;
    } else {
      temp -> next = head;
      head = temp;
    }
}
void insertAtTail(Node* &head, Node* &tail, int data) {
  Node* temp = new Node(data);
  if(tail == NULL) {
    tail = temp;
    head = temp;
  } else {
    tail -> next = temp;
    tail = temp;
  }
}

// sll
void print(Node* &head) {
  Node* curr = head;

  while(curr != NULL) {
    cout<< curr -> data << " ";
    curr = curr -> next;
  }
  cout<<endl;
}

Node* sortList(Node* &head) {
  // step - 1 - make a count of value while traversing each node
  int zeroCount = 0;
  int oneCount = 0;
  int twoCount = 0;

  Node* temp = head;

  while(temp != NULL) {
    if(temp -> data == 0) {
      zeroCount++;
    } else if(temp -> data == 1) {
      oneCount++;
    } else if(temp -> data == 2) {
      twoCount++;
    }
    temp = temp -> next;
  }

  // step - 2 - traverse the list, and replace each node with data...
  // ... according to the number of times it appreared in list
  temp = head;
  while(temp != NULL) {
    if(zeroCount != 0) {
      temp -> data = 0;
      zeroCount--;
    } else if(oneCount != 0) {
      temp -> data = 1;
      oneCount--;
    } else if(twoCount != 0) {
      temp -> data = 2;
    }
    temp = temp -> next;
  }

  return head;
}

int main() {
  Node* head = NULL;
  Node* tail = NULL;
  insertAtTail(head, tail, 1);
  insertAtTail(head, tail, 0);
  insertAtTail(head, tail, 1);
  insertAtTail(head, tail, 2);
  insertAtTail(head, tail, 2);
  insertAtTail(head, tail, 2);
  print(head);

  Node* newHead = sortList(head);
  print(newHead);
}

 