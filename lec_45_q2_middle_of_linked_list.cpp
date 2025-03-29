// find the Middle Node of a Linked List
// return a pointer pointing to the middle of the linked list
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
    cout<<"the memory for node with value " << val << " has been erased." <<endl;
  } 
};

void insertAtHead(Node* &head, int data) {
  Node* temp = new Node(data);

  temp -> next = head;
  head = temp;
}

// find length of Node
int getLength(Node* head) {
  int len = 0;
  while(head != NULL) {
    len++;
    head = head -> next;
  }
  return len;
}
// location of Middle Node
// this will return Node number
int findMid(Node* head) {
  int len = getLength(head);

  int ans = (len/2) + 1;

  return ans;
}
// location of Middle Node
// return the Node addr/data (as required)(by Question)
Node* findMiddle(Node* head) {
  int len = getLength(head);

  int ans = (len/2) + 1;

  Node* temp = head;

 int count = 1;

 while(count < ans) {
  temp = temp -> next;
  count++;
 }
 return temp;
}

// alternative by myself
// Node* findMiddle(Node* head) {
//   Node* temp = head;
//   int length = getLength(head);
//   int mid = (length/2)+1;

//   int count = 1;

//   while(count != mid) {
//     temp = temp -> next;
//     count++;
//   }

//   return temp;
// }

void print(Node* &head) {
  Node* temp = head;

  while(temp != NULL) {
    cout<< temp -> data << " ";
    temp = temp -> next;
  }
  cout<<endl;
}

int main() {
  Node* head = NULL;
  Node* tail = NULL;

  insertAtHead(head, 2);
  print(head);
  insertAtHead(head, 3);
  print(head);
  insertAtHead(head, 4);
  print(head);
  insertAtHead(head, 5);
  print(head);
  insertAtHead(head, 6);
  print(head);
  insertAtHead(head, 7);
  print(head);
  insertAtHead(head, 8);
  print(head);

  cout<< "head: " << head -> data <<endl;

  cout<<"middle node number: "<<findMid(head)<<endl;

  cout<<"node addr: "<< findMiddle(head) <<endl;
  Node* ans = findMiddle(head);
  cout<<"node data: "<<ans->data;
}
