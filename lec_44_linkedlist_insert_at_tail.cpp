// create a basic Linked list
// insert a new node
// insert at End/Tail
// New Node will be the TAIL 

#include<iostream>
using namespace std;

class Node {
  public:
    int data;
    Node* next;

    Node(int data) {
      this->data = data;
      this->next = NULL;
    }
};

void insertAtHead(Node* &head, int data) {
  Node* temp = new Node(data);

  temp->next = head;
  head = temp;
}

// inserting a new node at Tail
void insertAtTail(Node* &tail, int data) {
  Node* temp = new Node(data);

  tail -> next = temp;
  tail = tail -> next;
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

  // cout<<node1 -> data << endl;
  // cout<<node1 -> next;

  Node* head = node1;
  Node* tail = node1; // creating a Tail node 
  // in case of a single node, it will denote both head and tail

  print(head);
  insertAtTail(tail, 21);
  insertAtTail(tail, 31);
  
  print(head);
}
