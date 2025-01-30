// doubly linked list
// it has 3 parts, prev , data, and curr
// insert Node AT ANY POSITION
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
void insertAtHead(Node* &head, int data) {
  Node* temp = new Node(data);

  temp -> next = head;
  head -> prev = temp;
  head = temp;
}
void insertAtTail(Node* &tail, int data) {
  Node* temp = new Node(data);

  tail -> next = temp;
  temp -> prev = tail;
  tail = temp;
}
// trying by myself
void insertAtPosition(Node* &head, Node* &tail, int position, int data) {
  // insert at 1st position
  if(position == 1) {
    insertAtHead(head, data);
    return;
  } else { // any other position
    Node* temp = head;
    int count = 1;

    while(count < position - 1) {
      temp = temp -> next;
      count++;
    }
    // insert at last position
      if(temp -> next == NULL) {
        insertAtTail(tail, data);
        return;
      }
    // any other position other than last
    Node* insertNewNode = new Node(data);
    
    insertNewNode -> next = temp -> next;
    temp -> next -> prev = insertNewNode;
    insertNewNode -> prev = temp;
    temp -> next = insertNewNode;
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
  Node* node1 = new Node(10);

  // cout<< node1 -> data <<endl;
  // cout<< node1 -> prev <<endl;
  // cout<< node1 -> next <<endl;

  Node* head = node1;
  Node* tail = node1;

  insertAtHead(head, 12);
  print(head);
  insertAtHead(head, 13);
  print(head);
  insertAtHead(head, 14);
  print(head);
  insertAtTail(tail, 22);
  print(head);
  insertAtTail(tail, 23);
  print(head);
  // insert at any position
  insertAtPosition(head, tail, 7, 55);
  print(head);
  cout<< "head: " <<head -> data <<endl;
  cout<< "tail: " <<tail -> data <<endl;
}