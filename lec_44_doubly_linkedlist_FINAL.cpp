// Doubly Linked List
// this is an improvised Code, developed udring revision on..
// dated 14/02/2025, mainly improvised DELETENODE function

// doubly linked list - better version

#include<iostream>
using namespace std;

class Node {
  public:
    int data;
    Node* next;
    Node* prev;
  // constructor
  Node(int data) {
    this -> data = data;
    this -> next = NULL;
    this -> prev = NULL;
  }
  ~Node() {
    int val = this -> data;
    if(this -> next != NULL) {
      delete next;
      this -> next = NULL;
    }
    cout<< "memory for node with data " << val <<" has been deleted." <<endl;
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
    Node* curr = head;
    int count = 1;

    while(count < position -1) {
      curr = curr -> next;
      count++;
    }

    if(curr -> next == NULL) {
      insertAtTail(tail, head, data);
      return;
    }
    Node* temp = new Node(data);
    temp -> next = curr -> next;
    curr -> next -> prev = temp;
    curr -> next = temp;
    temp -> prev = curr;
  }
}

void deleteNode(Node* &head, Node* &tail, int position) {
  if(position == 1) {
    Node* temp = head;
    head = head -> next;
    temp -> next = NULL;
    head -> prev = NULL;
    delete temp;
  } else {
    Node* prev = NULL;
    Node* curr = head;
    int count = 1;

    while(count < position) {
      prev = curr;
      curr = curr -> next;
      count++;
    }

    prev -> next = curr -> next;
    if(prev -> next == NULL) {
      tail = prev;
    } else {
      curr -> next -> prev = prev;
    }
    curr -> next = NULL;
    curr -> prev = NULL;
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
  // Node* node1 = new Node(10);

  // cout<<node1 -> data <<endl;
  // cout<<node1 -> next <<endl;
  // cout<<node1 -> prev <<endl;

  Node* head = NULL;
  Node* tail = NULL;

  insertAtHead(head, tail, 11);
  print(head);
  insertAtHead(head, tail, 12);
  print(head);
  insertAtTail(tail, head, 20);
  print(head);
  insertAtTail(tail, head, 21);
  print(head);
  insertAtPosition(head, tail,5, 55);
  print(head);
  // deleteNode(head, tail, 5);
  // print(head);

  cout<< "head: " <<head -> data <<endl;
  cout<< "tail: " <<tail -> data <<endl;
}

