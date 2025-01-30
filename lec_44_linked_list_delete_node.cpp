// Linked list - is a collection of Nodes
// Each node has 2 parts, 1. data part, 2. address part (address of the next node)
// basic linked list with a single node
// insert at head, insert at tail, insert at any position
// Delete a Node, delete first node, or delete a node in a particular position

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
   // creating a destructor, '~' is used to create Destructor
  ~Node() {
    int value = this -> data; // this is just to confirm and print which data is deleted
    if(this -> next != NULL) {
      delete next;
      this->next = NULL;
    }
    cout<<"memory is free for node with data " << value <<endl;
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
  // if insert at position of head
  if(position == 1) {
    insertAtHead(head, data);
    return;
  }

  Node* temp = head;
  int count = 1;

  while(count < position - 1) {
    temp = temp -> next;
    count++;
  }
  // if insert as a tail
  if(temp -> next == NULL) {
    insertAtTail(tail, data);
    return;
  }

  Node* insertNewNode = new Node(data);
  insertNewNode -> next = temp -> next;
  temp -> next = insertNewNode; 
}

void deleteNode(Node* &head, Node* &tail, int position) {
  // we need prev node and curr node, which can be used for del of last or any other node
  // deleteing first/head node needs a diff approach, since there's no prev node
  // deleting first or start node/head node
  if(position == 1) { // delete a node at head
    Node* temp = head; // created to delete the node with destructor
    head = head -> next; // make the next node, the head node
    temp -> next = NULL; // before making memory free, point the TEMP to NULL
    // make that memory free, via destructor(because its allocated in heap)
    delete temp; // for this we need to create Destructor inside our Class
  } else {
    // deleteing any middle or last node
    Node* curr = head; // head is tagged as 'curr', and then curr pointer is moved to traverse
    Node* prev = NULL; 
    // since curr is pointed at head, 'prev' is something before 'head',..
    // .. which is non existent currently, hence NULL 
    // now we need to move forward the 'curr'
    int count = 1;
    while(count < position) {
      prev = curr;
      curr = curr -> next;
      count++;
    }
    prev -> next = curr -> next;
    curr -> next = NULL; // before making CURR memory free, point the CURR to NULL
    if(prev->next == NULL) { // case addded to assign TAIL, when deleting Last Node
      tail = prev;
    }
    delete curr;
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
  Node* node1 = new Node(15);

  // cout<< node1 -> data <<endl;
  // cout<< node1 -> next;
  Node* head = node1;
  Node* tail = node1;

  insertAtTail(tail, 21);
  print(head);
  insertAtTail(tail, 31);
  print(head);
  insertAtPosition(head, tail, 4, 66);
  print(head);
  //deleteNode(head, 1);
  //print(head);
  //deleteNode(head, 4); 
  // Node 4 is TAIL, deleting this Node, makes TAIL garbage value
  deleteNode(head, tail, 4); // tail argument added to assign tail on deletion of last Node
  print(head);
  cout<<"head: "<<head -> data <<endl;
  cout<<"tail: "<<tail -> data <<endl;
}
