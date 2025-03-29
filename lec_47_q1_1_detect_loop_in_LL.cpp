// Detect Cycle/loop in Linked List - using 'Map'
// self try (solved)

#include<iostream>
#include<map> // dependency for using 'map'
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

// done by myself
bool detect_loop(Node* &head) {
  if(head == NULL) return false; // empty list
  
  // using map Data-type to Map each visited node to TRUE, on first visit
  map <Node*, bool> visited;    // key-value pair
  Node* temp = head;

  while(temp != NULL) {
    visited[temp] = true; // each node mapped to true on VISIT
    
    temp = temp -> next;

    if(visited[temp]) {
    //  cout<<":"<<temp -> data <<endl; // debug test
      return true;
    }  // if node already has VISIT on map, then its cyclic
  }
  return false;   // reached NULL, hence not Cyclic

}

void print(Node* &head) {
  Node* temp = head;

  while(temp != NULL) {
    cout<< temp -> data << " ";
    temp = temp -> next;
  }
  cout<< endl;
}



int main() {
  Node* head = NULL;
  Node* tail = NULL;  
  
  insertAtHead(head, tail, 10);
  print(head);
  insertAtTail(tail, head, 20);
  print(head);
  insertAtTail(tail, head, 22);
  print(head);
  tail -> next = head; // making the LL cyclic
  insertAtHead(head, tail, 12);
  
  insertAtHead(head, tail, 14);
  
  insertAtHead(head, tail, 15);
  
  insertAtHead(head, tail, 16);
  //print(head);
  

  cout<< "head: " <<head -> data <<endl;
  cout<< "tail: " <<tail -> data <<endl;
//  cout<< "tail -> next -> data: " << tail -> next -> data <<endl; // check where loop ends/starts

  detect_loop(head) ? cout<<"LL has a cyclic loop" : cout<<"LL is not cyclic"<<endl;
}
