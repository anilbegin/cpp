// Singly linked list, then Reverse the Singly LL
// RECURSIVE method - APPROACH -1
// function - 1.reverseLinkedList, 2.reverse- are the only part done by CODEHELP
// CODEHELP performed them in CodeStudio as a part of Leetcode Problem
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
  ~Node() {
    int val = this -> data;
    if(this -> next != NULL) {
      delete next;
      this -> next = NULL;
    }
    cout<<"memory for node with value " << val <<" has been erased"<<endl;
  }  
};

void insertAtHead(Node* &head, int data) {
  Node* temp = new Node(data);

  temp -> next = head;
  head = temp;
}

void insertAtTail(Node* &tail, int data) {
  Node* temp = new Node(data);

  tail -> next = temp;
  tail = temp;
}

void insertAtPosition(Node* &head, Node* &tail, int position, int data) {
    if(position == 1) {
      insertAtHead(head, data);

    } else { // if at any other position except HEAD
      Node* curr = head;
      int count = 1;

      while(count < position - 1) {
        curr = curr -> next;
        count++;
      }
      if(curr -> next == NULL) {
        insertAtTail(tail, data);
        return;
      }
      Node* temp = new Node(data);
      temp -> next = curr -> next;
      curr -> next = temp;
    }
}

void deleteNode(Node* &head, Node* &tail, int position) {
  if(position == 1) {
    Node* temp = head;
    head = head -> next;
    temp -> next = NULL;
    delete temp; // create destructor for this to work
  } else {  
    Node* prev = NULL;
    Node* curr = head;
    int count = 1;

    while(count < position) {
      prev = curr;
      curr = curr -> next;
      count++;
    }
    if(curr -> next == NULL) {
      tail = prev;
    }
    prev -> next = curr -> next;
    curr -> next = NULL;
    delete curr;
  }
}

// iterative approach
// Node* reverseLinkedList(Node* &head) {
//   if(head == NULL || head -> next == NULL) {
//     return head;
//   }
  
//   Node* prev = NULL;
//   Node* curr = head;
//   Node* forward = NULL;

//   while(curr != NULL) {
//     forward = curr -> next;
//     curr -> next = prev;
//     prev = curr;
//     curr = forward;
//     if(curr == NULL) return prev;
//   }
// }

// recursive approach // Start
void reverse(Node* &head, Node* curr, Node* prev) {
  // base case
  if(curr == NULL) {
    head = prev;
    return;
  }

  Node* forward = curr -> next;
  reverse(head, forward, curr);
  curr -> next = prev;
}

Node* reverseLinkedList(Node* &head) {
  Node* curr = head;
  Node* prev = NULL;
  reverse(head, curr, prev);
  return head;
}
// recursive approach // End

// below recursive approach - found on 25/03/2025
// this works - better understanding

// void reverse(Node* &head, Node* curr, Node* prev) {
//   // base case
//   if(curr == NULL) {
//     head = prev;
//     return;
//   }

//   Node* forward = curr -> next;
//   curr -> next = prev;
//   reverse(head, forward, curr);
  
// }

void print(Node* &head) {
  Node* temp = head;

  while(temp != NULL) {
    cout<< temp -> data << " ";
    temp = temp -> next;
  }
  cout<<endl;
}

int main() {
  Node* node1 = new Node(10);

  // cout<< node1 -> data <<endl;
  // cout<< node1 -> next <<endl;

  Node* head = node1;
  Node* tail = node1;

  print(head);
  insertAtHead(head, 11);
  print(head);
  insertAtHead(head, 12);
  print(head);
  insertAtTail(tail, 20);
  print(head);
  insertAtTail(tail, 21);
  print(head);
  insertAtPosition(head, tail, 6, 50);
  print(head);
  

  Node* newHead = reverseLinkedList(head);
  cout<<"After reverse LL(recursive func):" <<endl;
  print(newHead);

  cout<<"head: " <<newHead -> data <<endl;
 // cout<< "tail: " <<tail -> data <<endl;
 
  return 0;
}