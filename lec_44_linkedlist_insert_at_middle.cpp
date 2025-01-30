// Linked list
// Insert a Node in-between 2 Nodes
// insert in middle, in a specified position

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
};

void insertAtHead(Node* &head, int data) {
  Node* temp = new Node(data);

  temp -> next = head;
  head = temp;
}
void insertAtTail(Node* &tail, int data) {
  Node* temp = new Node(data);

  tail -> next = temp;
  tail = temp; //tail = tail -> next; 
  
}

// insert in middle
void insertAtPosition(Node* &head, int position, int data) {
  //
  // if a node has to inserted at the first position
  if(position == 1) {
    insertAtHead(head, data);
    return;
  }
 //
  Node* temp = head; // a pointer 'temp' to tranverse through each node
  int cnt = 1;

  while(cnt < position - 1) {
    temp = temp -> next;  // traverse
    cnt++;
  }

  // creating a node for the 'data'
  Node* nodeToInsert = new Node(data); // create new node
  nodeToInsert -> next = temp -> next; // newnode's 'next' will point addr in temp->next
  temp -> next = nodeToInsert;  // temp's next will have addr of nodeToInsert 
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
  Node* node1 = new Node(15);

  // cout<< node1 -> data << endl;
  // cout<< node1 -> next << endl;

  Node* head = node1;
  Node* tail = node1;
  print(head);

  insertAtTail(tail, 21);
  print(head);
  insertAtTail(tail, 32);

  print(head);

  insertAtTail(tail,52);

  print(head);

  // insert in middle (insert in any position)
  insertAtPosition(head, 1, 62);
  print(head);
}