// Singly Linked list - CORRECTION
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
};

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

void insertAtTail(Node* &tail, Node* &head, int data) {
  Node* temp = new Node(data);

  if(tail == NULL) {
    tail = temp;
    head = temp;
  } else {
    tail -> next = temp;
    tail = temp;
  }
}

void insertAtPosition(Node* &head, Node* &tail, int position, int data) {
  if(position == 1) {
    insertAtHead(head, tail, data);
  } else {
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
    temp -> next = insertNewNode;
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
  //Node* node1 = new Node(data);
  // cout<< node1 -> data <<endl;
  // cout<< node1 -> next <<endl;

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

  insertAtPosition(head, tail, 5, 55);
  print(head);

  cout<< "head: " << head -> data <<endl;
  cout<< "tail: " << tail -> data <<endl;
}