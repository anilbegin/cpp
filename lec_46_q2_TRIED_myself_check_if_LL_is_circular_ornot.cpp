// check if an LL is circular or not

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
  ~Node() {
    int val = this -> data;
    if(this -> next != NULL) {
      delete next;
      this -> next = NULL;
    }
    cout<<"memory for node with value " << val << " has been erased." <<endl;
  }
};
// making a Singly LL
void insertAtHead(Node* &head, int data) {
  Node* temp = new Node(data);
  if(head == NULL) {
    head = temp;
  } else {
    temp -> next = head;
    head = temp;
  }  
}
// making a Circular LL
void insertNode(Node* &head, int element, int data) {
  //empty list
  if(head == NULL) {
    Node* newNode = new Node(data);
    head = newNode;
    newNode -> next = newNode; // because its a CLL, a Single existing Node will point to itself
  } else {
        Node* curr = head;

    while(curr -> data != element) {
      curr = curr -> next;
    
      if(curr == head) { // this 'if' section included by myself, not by CodeHelp
        cout<< "element " << element << " not found in the LL" << endl;
        return;
      }
    }
    
    // element found -> current is representing element wala node
    // now .. next step
    Node* temp = new Node(data);
    temp -> next = curr -> next;
    curr -> next = temp;
  }
}

// check if an LL is circular or not
bool isCircular(Node* &head) {
  if(head == NULL) return true; 
  // above condition already specified in LeetCode Question

  Node* curr = head;

  while(curr != NULL) {
    curr = curr -> next;

    if(curr == head) return true;
  }
  return false;
}

// print Singly LL
void print(Node* &head) {
  if(head == NULL) {
    cout<<"the list is empty!";
    return;
  }

  Node* temp = head;

  while(temp != NULL) {
    cout<< temp -> data <<" ";
    temp = temp -> next;
  }
  cout<<endl;
}

// print Circular LL
void cll_print(Node* &head) {
  if(head == NULL) {
    cout<<"the list is empty!";
    return;
  }

  Node* temp = head;

  do{
    cout<< temp -> data <<" ";
    temp = temp -> next;
  } while(temp != head);
  cout<<endl;
}

int main() {
  Node* head = NULL;
  
 // Singly LL test nodes  
  // insertAtHead(head, 6);
  // print(head);
  // insertAtHead(head, 5);
  // print(head);
  // insertAtHead(head, 4);
  // print(head);
  // insertAtHead(head, 3);
  // print(head);
  // insertAtHead(head, 2);
  // print(head);
  // insertAtHead(head, 1);
  // print(head);
  
  // Circular LL test Nodes
  insertNode(head, 4, 2);
  cll_print(head);
  // insertNode(head, 2, 3);
  // cll_print(head);
  // insertNode(head, 3, 4);
  // cll_print(head);
  // insertNode(head, 4, 5);
  // cll_print(head);
  // insertNode(head, 5, 6);
  // cll_print(head);
  
 // cout<<"head: " << head -> data <<endl;
  
  isCircular(head) ? cout<<" is circular LL" : cout<< "not cicular LL";
}


