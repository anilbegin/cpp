// Revise:
// Lec 53: 2 - Flatten a Linked List containing child Pointers
// this linked of LL can also be called Multi level list
// Below code sourced using ChatGPT

#include<iostream>
using namespace std;

class Node {
  public:
    int data;
    Node* next;
    Node* child;
  // constructor
  Node(int data) {
    this -> data = data;
    this -> next = NULL;
    this -> child = NULL;
  }  
};

// Function to print the multilevel list
void print(Node* head) {
  Node* curr = head;
  while (curr != NULL) {
      cout << curr->data << " ";
      Node* child = curr->child;
      while (child != NULL) {
          cout << "-> " << child->data << " ";
          child = child->child;
      }
      cout << endl;
      // to avoid printing '|' after last node
      if(curr -> next == NULL) return; 
      cout<<"|"<<endl;
      curr = curr->next;
  }
}


int main() {
   // Creating top-level list: 1 -> 4 -> 7 -> 9 -> 20
   Node* head = new Node(1);
   head->next = new Node(4);
   head->next->next = new Node(7);
   head->next->next->next = new Node(9);
   head->next->next->next->next = new Node(20);

   // Adding child nodes
   head->child = new Node(2);
   head->child->child = new Node(3);

   head->next->child = new Node(5);
   head->next->child->child = new Node(6);

   head->next->next->child = new Node(8);

   head->next->next->next->child = new Node(12);

   // Print the structure
   cout << "Multilevel Linked List Structure:\n";
   cout << "---- | is nodes, -> are child nodes ----\n";
   print(head);

}

// Another better way to create Multi-level Linkedlist
// dated: 15/04/25
// int main() {
//   Node* head = NULL;
//   Node* tail = NULL;

//   insertAtTail(head, tail, 1);
//   insertAtTail(head, tail, 4);
//   insertAtTail(head, tail, 7);
//   insertAtTail(head, tail, 9);
//   insertAtTail(head, tail, 20);

//   head -> child = new Node(2);
//   head -> child -> child = new Node(3);
//   head -> next -> child = new Node(5);
//   head -> next -> child -> child = new Node(6);
//   head -> next -> next -> child = new Node(8);
//   head -> next -> next -> next -> child = new Node(12);

//   print(head);

//   head = flattenLinkedList(head);
//   print(head);
// }