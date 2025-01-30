// Doubly Linked List
// contains 3 things, prev-data-next
// Every Node contains 2 pointers.. 
//..first is Prev, second is Next
// basic Doubly Linked List
// insert a new node at HEAD
// insert a new node at TAIL
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
// traversing Linked List
void print(Node* &head) {
  Node* temp = head;

  while(temp != NULL) {
    cout<< temp -> data << " ";
    temp = temp -> next;
  }
  cout<< endl;
}
// returns the Length of LL
int getLength(Node* &head) {
  Node* temp = head;
  int length = 0;

  while(temp != NULL) {
    length++;
    temp = temp -> next;
  }

  return length;
}
// insert new node at HEAD
void insertAtHead(Node* &head, int data) {
  Node* temp = new Node(data);

  temp -> next = head;
  head -> prev = temp;
  head = temp;
}
// insert new node at TAIL
void insertAtTail(Node* &tail, int data) {
  Node* temp = new Node(data);

  tail -> next = temp;
  temp -> prev = tail;
  tail = temp;
}

int main() {
  Node* node1 = new Node(10);
  
  Node* head = node1;
  Node* tail = node1;

  print(head);
  cout<<getLength(head); 
  cout<<endl;

   insertAtHead(head, 11);
   print(head);

   insertAtHead(head, 14);
   print(head);

   insertAtHead(head, 15);
   print(head);

  insertAtTail(tail, 16);
  print(head);
   insertAtTail(tail, 19);
  print(head);
   insertAtTail(tail, 21);
  print(head);

}
