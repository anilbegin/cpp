// Lec:49 - 
// Sort 0s 1s and 2s in LinkedList : Approach 2
// don't replace the data in the Linked list.

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
    cout<<"memory for node with value "<< val << " has been erased." <<endl;
  } 
};
// sll
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
void insertAtTail(Node* &head, Node* &tail, int data) {
  Node* temp = new Node(data);
  if(tail == NULL) {
    tail = temp;
    head = temp;
  } else {
    tail -> next = temp;
    tail = temp;
  }
}
// make separate LL for each distinct value of nodes
void make_separate_LL(Node* &tail, Node* curr) {
  tail -> next = curr;
  tail = curr;
}


// sll
void print(Node* &head) {
  Node* curr = head;

  while(curr != NULL) {
    cout<< curr -> data << " ";
    curr = curr -> next;
  }
  cout<<endl;
}

// Approach - 2
// make 3 separate Linked lists for the values of 0, 1, 2
Node* sortList(Node* &head) {
  // dummy nodes
  Node* zeroHead = new Node(-1);
  Node* oneHead = new Node(-1);
  Node* twoHead = new Node(-1); 
  // Tail pointer introduced - as we will be inserting
  // each new repeated node value to TAIL
  Node* zeroTail = zeroHead;
  Node* oneTail = oneHead;
  Node* twoTail = twoHead;

  Node* curr = head;

  // 3 separate Linked list for 0's, 1's, 2's
  while(curr != NULL) {
    int value = curr -> data; // value in current node..

    if(value == 0) {
      make_separate_LL(zeroTail, curr);
    } else if(value == 1) {
      make_separate_LL(oneTail, curr);
    } else if(value == 2) {
      make_separate_LL(twoTail, curr);
    }
    curr = curr -> next;
  }
  
  // merge 3 sublists
  if(oneHead -> next != NULL) {
    zeroTail -> next = oneHead -> next;
    oneTail -> next = twoHead -> next; // chk (line by myself)
  } else {
    zeroTail -> next = twoHead -> next;
  }

//  oneTail -> next = twoHead -> next; 
// (above line by codehelp, seems to be wrong) .. 
// .. not logical when there is no node with data '2'
  twoTail -> next = NULL;
  
  //set head
  head = zeroHead -> next;
  // 'by-myself' - lines not included by Codehelp, but wihtout it..
  // .. OP shows all nodes deleted
  zeroHead -> next = NULL; // by-myself
  delete zeroHead;
  oneHead -> next = NULL; // by-myself
  delete oneHead;
  twoHead -> next = NULL; // by-myself
  delete twoHead;

  

  return head;
}

int main() {
  Node* head = NULL;
  Node* tail = NULL;
  insertAtTail(head, tail, 1);
  insertAtTail(head, tail, 0);
  insertAtTail(head, tail, 1);
  insertAtTail(head, tail, 2);
  insertAtTail(head, tail, 2);
  insertAtTail(head, tail, 2);
  insertAtTail(head, tail, 0);
  print(head);

  Node* newHead = sortList(head);
  print(newHead);
}
