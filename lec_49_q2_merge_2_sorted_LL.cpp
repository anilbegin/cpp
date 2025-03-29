// lec:49 : Q2 - merge 2 sorted linked list
// Codehelp solved this in CODE Studio
// CODEHELP Soln used "type name template" instead of using Node* they used Node<int>*
// "type name template" is a generic way of making Linked List
// so whatever type of data is to be stored in Linked list, say string, char, etc
// we wll be able to store with this generic Template for LL.

#include<iostream>
using namespace std;

// generic template for LL shown in CodeStudio
// template <typename T>
// class Node {
//   public:
//     T data;
//     Node* next;
//   // constructor  
//   Node(T data) {
//     this -> data = data;
//     this -> next = NULL;
//   }
//   // destructor
//   ~Node() {
//     if(this -> next != NULL) {
//       delete next;
//     }
//   }  
// };

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

void print(Node* &head) {
  Node* temp = head;

  while(temp != NULL) {
    cout<< temp -> data << " ";
    temp = temp -> next;
  }
  cout<<endl;
}
//void solve(Node<int>* first, Node<int>* second)
Node* solve(Node* &first, Node* &second) {

  // if only one element is present in the 'first' LL
  // without below if cond, the while loop below it never gets executed, and return only first LL
  if(first-> next == NULL) {
    first -> next = second;
    return first;
  }

  Node* curr1 = first;  // first node of first LL
  Node* next1 = curr1 -> next; // second node of first LL
  Node* curr2 = second; // first node of second LL
  Node* next2 = NULL; // to be used to point to next node of curr2 to keep track

  while(next1 != NULL && curr2 != NULL) {
    if((curr2 -> data >= curr1 -> data) && (curr2 -> data <=  next1 -> data)) {
      curr1 -> next = curr2;  // new node being added next to curr1 
      next2 = curr2 -> next;  // keep track of next node in second LL
      curr2 -> next = next1;  // new node finally added between curr1 and next1.
      curr1 = curr2;  // new node that was added is named the curr1 node now
      curr2 = next2;  // the next node the Second LL
    } else {
      curr1 = next1;
      next1 = next1 -> next;
      if(next1 == NULL) { // no  more next1 node in first LL then..
        // move the rest of second LL to join to First ll
        curr1 -> next = curr2;
        return first;
      }
    }
  }
  return first;
}

//Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
Node* sortTwoLists(Node* &first, Node* &second) {
  if(first == NULL) return second;
  if(second == NULL) return first;

  if(first -> data <= second -> data) {
    return solve(first, second);
  } else {
    return solve(second, first);
  }
}

int main() {
  Node* head1 = NULL;
  Node* tail1 = NULL;

  // sorted LL - 1
  insertAtTail(tail1, head1, 2);
  insertAtTail(tail1, head1, 3);
  insertAtTail(tail1, head1, 6);
  insertAtTail(tail1, head1, 8);
  insertAtTail(tail1, head1, 9);
  
  print(head1);
  
  Node* head2 = NULL;
  Node* tail2 = NULL;

  // sorted LL - 2
  insertAtTail(tail2, head2, 1);
  // insertAtTail(tail2, head2, 3);
  // insertAtTail(tail2, head2, 5);
  // insertAtTail(tail2, head2, 7);
  // insertAtTail(tail2, head2, 10);

  print(head2);

  head1 = sortTwoLists(head1, head2);
  print(head1);
}
