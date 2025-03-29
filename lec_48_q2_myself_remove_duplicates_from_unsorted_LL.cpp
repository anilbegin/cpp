// remove Duplicates from a UNSORTED linked list
// Tried by myself, success !
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
    cout<<"memory for node with value " << val << " has been erased." <<endl;
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

void print(Node* &head) {
  Node* temp = head;

  while(temp != NULL) {
    cout<< temp -> data << " ";
    temp = temp -> next;
  }
  cout<<endl;
}

Node* remove_duplicates(Node* &head) {
  if(head == NULL) return NULL;

  Node* curr = head;

  while(curr != NULL) {
    if((curr -> next != NULL) && curr -> data == curr -> next -> data) {
      Node* forward = curr -> next -> next;
      Node* nodeToDelete = curr -> next;
      nodeToDelete -> next = NULL;
      delete nodeToDelete;
      curr -> next = forward;
    } else {
      curr = curr -> next;
    }
  }
  return head;
}
// remove duplicates - unsorted LL
Node* remove_duplicates_unsorted(Node* &head) {
  if(head == NULL || head -> next == NULL) return head;
  
  Node* curr = head;
  Node* prev = NULL;
  while(curr != NULL) {
    prev = curr;
    Node* temp = curr -> next;
    while(temp != NULL) {
      if( curr -> data == temp -> data) {
        prev -> next = temp -> next;
        temp -> next = NULL;
        delete temp;
        temp = prev -> next;
      } else {
        prev = temp;
        temp = temp -> next;
      }
    }
    curr = curr -> next;
  }

  return head;
}

int main() {
  Node* head = NULL;
  Node* tail = NULL;

  insertAtHead(head, tail, 10);
  insertAtHead(head, tail, 9);
  insertAtTail(tail, head, 10);
  insertAtTail(tail, head, 19);
  insertAtTail(tail, head, 9);
  insertAtTail(tail, head, 19);
  insertAtTail(tail, head, 11);
  insertAtTail(tail, head, 19);
  print(head);
  
   Node* newHead = remove_duplicates_unsorted(head);
   print(newHead);
}

