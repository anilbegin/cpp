// lec:52 - clone a linked list with random pointers
// Approach - 2

#include<iostream>
#include<unordered_map>
using namespace std;

// moded Node class to accomodate Random pointers
class Node {
  public:
    int data;
    Node* next;
    Node* random; // random pointer, but don't know how to apply it  
  // constructor
  Node(int data) {
    this -> data = data;
    this -> next = NULL;
    this -> random = NULL;
  } 
};

void insertAtTail(Node* &head, Node* &tail, int data) {
  Node* temp = new Node(data);

  if(tail == NULL) {
    head = temp;
    tail = temp;
  } else {
    tail -> next = temp;
    tail = temp;
  }
}

// printing an LL with Random Pointers
void print(Node* head) {
  Node* curr = head;
  while(curr != NULL) {
    cout<< " curr: " << curr -> data << " ";
    if(curr -> random) {
      cout<< "rnd: " << curr -> random -> data;
    } else cout<<" :null: ";
    curr = curr -> next;
  }
  cout<<endl;
}

// Cloning an LL with random pointers
Node* copyList(Node* head) {
// step - 1 : create a clone list with the normal 'next' pointers
  Node* cloneHead = NULL;
  Node* cloneTail = NULL;

  Node* temp = head;
 
  while(temp != NULL) {
    insertAtTail(cloneHead, cloneTail, temp -> data);
    temp = temp -> next;
  }
    
// end of step - 1
// step - 2 - create a map
  unordered_map<Node*, Node*> oldToNewNode;

  Node* originalNode = head;
  Node* cloneNode = cloneHead;
  while(originalNode != NULL) {
    oldToNewNode[originalNode] = cloneNode;
    originalNode = originalNode -> next;
    cloneNode = cloneNode -> next;
  }
//so basically we have mapped Original LL with CLoned LL now.
  originalNode = head;
  cloneNode = cloneHead;
  
  while(originalNode != NULL) {
    cloneNode -> random = oldToNewNode[originalNode -> random];
    originalNode = originalNode -> next;
    cloneNode = cloneNode -> next;
  }
  return cloneHead;
}

int main() {
  Node* node1 = new Node(1);
  Node* node2 = new Node(2);
  Node* node3 = new Node(3);
  Node* node4 = new Node(4);
  Node* node5 = new Node(5);

  // normal 'next' pointers
  node1-> next = node2;
  node2-> next = node3;
  node3-> next = node4;
  node4-> next = node5;
  

  // random pointers
  node1 -> random = node3;
  node2 -> random = node1;
  node3 -> random = node5;
  node4 -> random = node3;
  node5 -> random = node2;
 

  Node* head = node1;

  print(head);

  cout<<"cloned-list:" <<endl;
  Node* clone = copyList(head);
  print(clone);
 
}
