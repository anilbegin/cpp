// find middle of Linked list
// Second Method (better)
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
  ~Node() {
    int val = this -> data;
    if(this -> next != NULL) {
      delete next;
      this -> next = NULL;
    }
    cout<<"the memory for node with value " << val << " has been erased." <<endl;
  }  
};

void insertAtHead(Node* &head, int data) {
  Node* temp = new Node(data);

  if(head == NULL) {
    head = temp;
  } else {
    temp -> next = head;
    head = temp;
  }
}

Node* getMiddle(Node* &head) {
  if(head == NULL || head -> next == NULL) {
    return head;
  }

  // if(head -> next -> next == NULL) { // this condition is not needed
  //   return head -> next;
  // }

  Node* slow = head;
  Node* fast = head -> next;

  while(fast != NULL) {
    fast = fast -> next;
    if(fast != NULL) {
      fast = fast -> next;
    }

    slow = slow -> next;
  }

  return slow;
}

// Better Solution found on 25/03/2025
// Node* find_mid(Node* &head) {
//   if(head == NULL) return NULL;
  
//   Node* slow = head;
//   Node* fast = head;

//   while(fast != NULL && fast -> next != NULL) {
//     fast = fast -> next -> next;
//     slow = slow -> next;
//   }
//   return slow;
// }

void print(Node* &head) {
  if(head == NULL) {
    cout<<"list is empty!"<<endl;
    return;
  }

  Node* temp = head;

  while(temp != NULL) {
    cout<< temp -> data << " ";
    temp = temp -> next;
  }
  cout<<endl;
}

int main() {
  Node* head = NULL;

  insertAtHead(head, 11);
  print(head);
  insertAtHead(head, 12);
  print(head);
  insertAtHead(head, 14);
  print(head);
  insertAtHead(head, 15);
  print(head);
  insertAtHead(head, 16);
  print(head);
  insertAtHead(head, 17);
  print(head);
  insertAtHead(head, 18);
  print(head);
  
  cout<<"middle node: "<<getMiddle(head) <<endl;
  Node* addr = getMiddle(head);
  cout<<"middle node value: " << addr -> data <<endl;

}
