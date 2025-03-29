// HOMEWORK
// CODEHELP Homework - first try by myself ITERATIVE method
// reverse a Doubly Linked list - Approach - 1
// linked list consists of nodes, each node consists of a data part and a address part

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
  // destructor
  ~Node() {
    int val = this -> data;
    if(this -> next != NULL) {
      delete next;
      this -> next = NULL;
    }
    cout<<"memory for node with value " << val <<" has been erased" <<endl;
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

// Iterative method to reverse Doubly LL
Node* reverseLinkedList(Node* &head) {
  if(head == NULL || head -> next == NULL) {
    return head;
  }

  Node* curr = head;
  Node* previ = NULL;
  Node* forward = NULL;
  
  while(curr != NULL) {
    forward = curr -> next;  
    curr -> next = previ;
    curr -> prev = forward;
    previ = curr;
    curr = forward;
  }
  return previ;
}

void print(Node* &head) {
  Node* temp = head;

  while(temp != NULL) {
    cout<< temp -> data <<" ";
    temp = temp -> next;
  }
  cout<<endl;
}

int main() {
  Node* head = NULL;
  Node* tail = NULL;

  insertAtHead(head, tail, 1);
  print(head);
  insertAtHead(head, tail, 2);
  print(head);
  insertAtHead(head, tail, 3);
  print(head);
  insertAtHead(head, tail, 4);
  print(head);

   cout<<"head: " <<head -> data <<endl;

  Node* newHead = reverseLinkedList(head);
  print(newHead);  

   cout<<"new head: " <<newHead -> data <<endl;
}