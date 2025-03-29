// reverse a Linked list (ITERATIVE SOLUTION)
// function - reverseLinkedLst - is the only part done by CODEHELP
// rest of the functions, and main function done by me for clear understanding and..
// .. to test if the reverseLinkedList function has done the job.
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

void insertAtHead(Node* &head, int data) {
  Node* temp = new Node(data);
  
  if(head == NULL) {
    head = temp;
  } else {
    temp ->next = head;
    head = temp;
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

// REVERSE a LINKED LIST
Node* reverseLinkedLst(Node* &head) {
  if(head == NULL || head-> next == NULL) { // empty list and single Node cases
    return head;
  }
  
  Node* prev = NULL;
  Node* curr = head;
  Node* forward = NULL;

  while(curr != NULL) {
    forward = curr-> next;
    curr -> next = prev;
    prev = curr;
    curr = forward;
  }
  return prev;
}

int main() {
  Node* head = NULL;

  insertAtHead(head, 1);
  print(head);
  insertAtHead(head, 2);
  print(head);
  insertAtHead(head, 3);
  print(head);
  insertAtHead(head, 4);
  print(head);
  cout<<"old-head: " << head -> data <<endl;
  //reverseLinkedLst(head);
  Node* newHead = reverseLinkedLst(head);
  cout<< "new-head: " << newHead->data << endl;
  print(newHead);
}
