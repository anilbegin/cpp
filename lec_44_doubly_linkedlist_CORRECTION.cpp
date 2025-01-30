// Doubly linked list - CORRECTION
// CORRECTION - what if we have an EMPTY LIST..
// ..while calling either of the functions to create a NODE in LL
#include<iostream>
using namespace std;

class Node {
  public:
    int data;
    Node* prev;
    Node* next;
  // constructor
  Node(int data) {
    this -> data = data;
    this -> prev = NULL;
    this -> next = NULL;
  }
};

void insertAtHead(Node* &head, Node* &tail, int data) {
  Node* temp = new Node(data);

  if(head == NULL) { // there are no nodes yet
    head = temp;
    tail = temp;
  } else {  // 1 or more nodes are already present
    temp -> next = head;
    head -> prev = temp;
    head = temp;
  }
}

void insertAtTail(Node* &tail, Node* &head, int data) {
  Node* temp = new Node(data);

  if(tail == NULL) {
    tail = temp;
    head = temp;
  } else {
    tail -> next = temp;
    temp -> prev = tail;
    tail = temp;
  }
}

void insertAtPosition(Node* &head, Node* &tail, int position, int data) {
  if(position == 1) {
    insertAtHead(head, tail, data);
  } else { // at any other position
    Node* temp = head;
    int count = 1;
    while(count < position - 1) {
      temp = temp -> next;
      count++;
    }
    if(temp -> next == NULL) {
      insertAtTail(tail, head, data);
      return;
    }
    Node* insertNewNode = new Node(data);
    insertNewNode -> next = temp -> next;
    temp -> next -> prev = insertNewNode;
    temp -> next = insertNewNode;
    insertNewNode -> prev = temp;
  }
}

void print(Node* &head) {
  Node* temp = head;

  while(temp != NULL) {
    cout<< temp -> data << " ";
    temp = temp -> next;
  }
  cout<< endl;
}

int main() {
  
  Node* head = NULL;
  Node* tail = NULL;
  
  print(head);

  insertAtHead(head, tail, 11);
  print(head);
  insertAtHead(head, tail, 12);
  print(head);

  insertAtTail(tail, head, 21);
  print(head);
  insertAtTail(tail, head, 22);
  print(head);

  insertAtPosition(head, tail, 2, 55);
  print(head);

  cout<< "head: " << head -> data << endl;
  cout<< "tail: " << tail -> data << endl;
}
