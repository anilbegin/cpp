// DELETING NODE in Doubly Linked List
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
  ~Node() {
    int val = this -> data;
    if(this -> next != NULL) {
      delete next;
      this -> next = NULL;
    }
    cout<<"memory free for node with data "<<val<<endl;
  }
};

void insertAtHead(Node* &head, Node* &tail, int data) {
  Node* temp = new Node(data);

  if(head == NULL) {
    head = temp;
    tail = temp;
  } else {
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
  } else {
    Node* temp = head;
    int count = 1;
    while(count < position -1) {
      temp = temp -> next;
      count++;
    }
    if(temp -> next == NULL) {
      insertAtTail(tail, head, data);
      return;
    }
    Node* insertNewNode = new Node(data);
    insertNewNode -> next = temp -> next;
    insertNewNode -> prev = temp;
    temp -> next -> prev = insertNewNode;
    temp -> next = insertNewNode;
  }
}

// delete Node for DLL
void deleteNode(Node* &head, Node* &tail, int position) {
  if(position == 1) {
    Node* temp = head;
    head = head -> next;
    // head = temp -> next; // line used by CodeHelp
    temp -> next -> prev = NULL; //the new head's prev will point to NULL 
    temp -> next = NULL;
    delete temp;
  } else {
    Node* curr = head;
    Node* prev = NULL;
    int count = 1;
    while(count < position) {
      prev = curr;
      curr = curr -> next;
      count++;
    }
    /* Shorter CODE but harder to understand */
    // curr -> prev = NULL;
    // prev -> next = curr -> next;
    // if(curr -> next == NULL) { // if deleting Last Node
    //   tail = prev;
    // } else {  // if any other Node
    //   curr -> next -> prev = prev;
    //   curr -> next = NULL;
    // }
    // delete curr;
    /* END */
    /* Below longer Version but easier to understand */
    if(curr -> next == NULL) { // if deleting Last Node
      curr -> prev = NULL;
      prev -> next = curr -> next;
      tail = prev; // prev is the new TAIL
    } else { // if any other Node
      curr -> prev = NULL;
      prev -> next = curr -> next;
      curr -> next -> prev = prev;
      curr -> next = NULL;
    }
    delete curr;
  }
}

void print(Node* &head) {
  Node* temp = head;

  while(temp != NULL) {
    cout<< temp -> data << " ";
    temp = temp -> next;
  }
  cout<<endl;
}


int main() {

  Node* head = NULL;
  Node* tail = NULL;

  insertAtHead(head, tail, 12);
  print(head);
  insertAtHead(head, tail, 13);
  print(head);
  insertAtTail(tail, head, 21);
  print(head);
  insertAtTail(tail, head, 22);
  print(head);

  insertAtPosition(head, tail, 1, 55);
  print(head);

  deleteNode(head, tail, 4);
  print(head);
    
  cout<<"head: " << head -> data <<endl;
  cout<<"tail: " << tail -> data <<endl;

}
