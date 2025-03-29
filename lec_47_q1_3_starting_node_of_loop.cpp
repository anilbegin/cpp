//  - find starting Node of Loop

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

// floyds cycle detection algo (done myself, by understanding concept)
Node* floyds_detect_loop(Node* &head) {
  if(head == NULL || head -> next == NULL) return NULL;
                    // head -> next == NULL has to be checked ! ...
                    // ..if there is only one NOde in LL, then both fast and slow..
                    // .. will reach NULL at same time, and if(fast == slow) would return TRUE !   
  Node* slow = head;
  Node* fast = head;

  while(fast != NULL) {
    fast = fast -> next;
    if(fast != NULL) {
      fast = fast -> next;
    } 
    slow = slow -> next;
    if(fast == slow) return slow;
  }
  return NULL;
}

// **find starting Node of Loop**
Node* getStartingNode(Node* &head) {
  if(head == NULL) return NULL;

  Node* intersection = floyds_detect_loop(head);
  Node* slow = head;

  while(slow != intersection) {
    slow = slow -> next;
    intersection = intersection -> next;
  }

  return slow;

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
  insertAtTail(tail, head, 23);
  print(head);
  tail -> next = head; // making the LL cyclic
  insertAtHead(head, tail, 12);
  
  insertAtHead(head, tail, 14);
  
  insertAtHead(head, tail, 15);
  
  insertAtHead(head, tail, 16);
  //print(head); // infinte loop on print if cycle present
  

  cout<< "head: " <<head -> data <<endl;
  cout<< "tail: " <<tail -> data <<endl;


 Node* loop_node = getStartingNode(head);

 cout<<"loop-start-node:" << loop_node -> data <<endl;
}

