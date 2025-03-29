// reverse by group of K 
// reverse nodes in groups of k
// recursive

#include<iostream>
using namespace std;

class Node {
  public:
    int data;
    Node* next;
  Node(int data) {
    this -> data = data;
    this -> next = NULL;
  }
  ~Node() {
    int val = this -> data;
    if(this -> next != NULL) {
      delete next;
      this -> next = NULL;
    }
    cout<<"memory for node with value " << val << " has been erased." <<endl;
  }
};

void insertAtHead(Node* &head, int data) {
  Node* temp = new Node(data);
  if(head == NULL) {
    head = temp;
  } else {
    temp -> next = head;
    head = temp;
  }  
}

// reverse by group of k nodes
Node* kReverse(Node* &head, int k) {
  // base case
  if(head == NULL) {
    return NULL;
  }

  // step1: reverse first k nodes
  Node* prev = NULL;
  Node* curr = head;
  Node* forward = NULL;
  int count = 0;

  while(curr != NULL && count < k) {
    forward = curr -> next;
    curr -> next = prev;
    prev = curr;
    curr = forward;
    count++;
  }

  //step2: recursion dekhlega aageka
  if(forward != NULL) {
    head -> next = kReverse(forward, k);
  }
  //cout<< "*" << prev-> data <<"*"; // (debug) check what prev is returned on end of each iteration
  // step3: return head of reversed list
  return prev;
}

void print(Node* &head) {
  if(head == NULL) {
    cout<<"the list is empty!";
    return;
  }

  Node* temp = head;

  while(temp != NULL) {
    cout<< temp -> data <<" ";
    temp = temp -> next;
  }
  cout<<endl;
}

int main() {
  Node* head = NULL;
  
  insertAtHead(head, 6);
  print(head);
  insertAtHead(head, 5);
  print(head);
  insertAtHead(head, 4);
  print(head);
  insertAtHead(head, 3);
  print(head);
  insertAtHead(head, 2);
  print(head);
  insertAtHead(head, 1);
  print(head);
    
  cout<<"head: " << head -> data <<endl;

  Node* newHead = kReverse(head,2);
  cout<<"newHead: " <<newHead -> data<<endl;
  print(newHead);

  
}


