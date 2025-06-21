// lec:52 - Clone a Linked List with Random Pointers
// Approach - 3 - S.C O(1)
#include<iostream>
using namespace std;

class Node {
  public:
    int data;
    Node* next;
    Node* random;
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

void print(Node* &head) {
  Node* curr = head;

  while(curr != NULL) {
    cout<< " curr: " << curr -> data << " ";
    if(curr -> random) {
      cout<< "rand: " <<curr -> random -> data << " ";
    } else cout << ":null:";
    curr = curr -> next;
  }
  cout<<endl;
}

Node* copyList(Node* head) {
  // step : 1 - create a clone list
  Node* cloneHead = NULL;
  Node* cloneTail = NULL;

  Node* curr = head;

  while(curr != NULL) {
    insertAtTail(cloneHead, cloneTail, curr -> data);
    curr = curr -> next;
  }

  // step 2 : Add Clonelist nodes, in between Original list
  Node* originalNode = head;
  Node* cloneNode = cloneHead;
  
  while(cloneNode != NULL) {
    Node* next = originalNode -> next;
    originalNode -> next = cloneNode;
    originalNode = next;

    next = cloneNode -> next;
    cloneNode -> next = originalNode;
    cloneNode = next;
  }

  // step 3 : random pointer Copy
  // what if the Original Node's -> random is NULL (we have to take that case)
  // CodeHelp's explanation on this section is a little Wrong
  Node* temp = head;
  while(temp != NULL) {
    if(temp -> random != NULL) {
      temp -> next -> random = temp -> random -> next;
    } else {
      temp -> next -> random = NULL;
    }
    temp = temp -> next -> next;
  }

  // step 4 : revert changes made in step - 2
  originalNode = head;
  cloneNode = cloneHead;

  while(originalNode != NULL) {
    originalNode -> next = cloneNode -> next;
    originalNode = originalNode -> next;
  
    if(originalNode != NULL) {
      cloneNode -> next = originalNode -> next;
      cloneNode = cloneNode -> next;  
    } else {
      cloneNode -> next = NULL;
    }
  }
  
  // step 5 : return cloneHEad
  return cloneHead;
}

int main() {
  Node* node1 = new Node(1);
  Node* node2 = new Node(2);
  Node* node3 = new Node(3);
  Node* node4 = new Node(4);
  Node* node5 = new Node(5);

  // normal next pointers
  node1 -> next = node2;
  node2 -> next = node3; 
  node3 -> next = node4;
  node4 -> next = node5;

  // random pointers
  node1 -> random = node3;
  node2 -> random = node1;
  node3 -> random = node5;
  node4 -> random = node3;
  node5 -> random = node2;

  Node* head = node1;

  print(head);

  Node* clone = copyList(head);

  cout<<"cloned-list:"<<endl;
  print(clone);
}
