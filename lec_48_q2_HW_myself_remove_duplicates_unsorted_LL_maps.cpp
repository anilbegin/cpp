// remove duplicates unsorted - using 'map'
// deleting duplicates in a single traversal

#include<iostream>
#include<map> // header needed for using maps
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
    cout<<"memory for node with value " << val << " is erased." <<endl;
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

// remove duplicates in Unsorted LL usign 'map'
// done by myself
void remove_duplicates_unsorted_maps(Node* &head) {
  map <int, bool> exists;
  Node* curr = head;
  Node* prev = NULL;

  while(curr != NULL) {
    // check if this particular data-value was already present before
    // if already was present delete it
    if(exists[curr -> data]) {
      prev -> next = curr -> next;
      curr -> next = NULL;
      delete curr;
      curr = prev -> next;
    } else { // mark that data-value as 'true'
      exists[curr -> data] = true;
      prev = curr;
      curr = curr -> next;
    } 
  }
}

void print(Node* head) {
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

  insertAtTail(tail, head, 10);
  insertAtTail(tail, head, 10);
  insertAtTail(tail, head, 10);
  insertAtTail(tail, head, 9);
  insertAtTail(tail, head, 10);
  insertAtTail(tail, head, 10);
  insertAtTail(tail, head, 11);
  insertAtTail(tail, head, 9);
  insertAtTail(tail, head, 8);
  insertAtTail(tail, head, 8);
  insertAtTail(tail, head, 11);
  insertAtTail(tail, head, 11);
  print(head);

  remove_duplicates_unsorted_maps(head);
  print(head);
}