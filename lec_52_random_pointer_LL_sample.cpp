// Sample: a Linked List with Random Pointers

#include<iostream>
using namespace std;

class Node {
  public:
    int data;
    Node* next;
    Node* random; // random pointer
  // constructor
  Node(int data) {
    this -> data = data;
    this -> next = NULL;
    this -> random = NULL;
  } 
};

// printing a Linked list with Random pointer
void print(Node* &head) {
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
 
}