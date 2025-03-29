// lec - 51: Add two Numbers represented by Linked list

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
    cout<<"memory for node with value " << val << " has been erased." << endl;
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

void print(Node* &head) {
  Node* curr = head;

  while(curr != NULL) {
    cout<< curr -> data << " ";
    curr = curr -> next;
  }
  cout<<endl;
}
// reverse input LL
Node* reverse(Node* &head) {
  Node* curr = head;
  Node* prev = NULL;
  Node* forward = NULL;

  while(curr != NULL) {
    forward = curr -> next;
    curr-> next = prev;
    prev = curr;
    curr = forward;
  }
  return prev;
}
// Basic Function without Optimization
// Node* add(Node* first, Node* second) {
//   int carry = 0;
  
//   Node* ansHead = NULL;
//   Node* ansTail = NULL;
//   while(first != NULL && second != NULL ) {
//     int sum = carry + first -> data + second -> data;
//     int digit = sum%10;

//        // create Node and add to answer LL
//     insertAtTail(ansHead, ansTail, digit);
//     carry = sum/10;
//     first = first -> next;
//     second = second -> next;
//   }
  
//   // First LL still has nodes remaining to be added compared to Second LL
//   while(first != NULL) {
//     int sum = carry + first -> data;
//     int digit = sum%10;

//     insertAtTail(ansHead, ansTail, digit);
//     carry = sum/10;
//     first = first -> next;
//   }

//     // Second LL still has nodes remaining to be added compared to First LL
//     while(second != NULL) {
//       int sum = carry + second -> data;
//       int digit = sum%10;
  
//       insertAtTail(ansHead, ansTail, digit);
//       carry = sum/10;
//       second = second -> next;
//     }

//     // First and Second had same length, but Carry Value is still remaining
//     while(carry != 0) {
//       int sum = carry;
//       int digit = sum%10;

//       insertAtTail(ansHead, ansTail, digit);
//       carry = sum/10;
//     }

//   return ansHead;
// }

// Optimized function - 
Node* add(Node* first, Node* second) {
  int carry = 0;
  
  Node* ansHead = NULL;
  Node* ansTail = NULL;
  while(first != NULL || second != NULL || carry != 0) {
    int val1 = 0;
    if(first != NULL) val1 = first -> data; // if NULL thn val1 = 0
    
    int val2 = 0;
    if(second != NULL) val2 = second -> data; // if NULL thn val2 = 0

    int sum = carry + val1 + val2;
    int digit = sum%10;

       // create Node and add to answer LL
    insertAtTail(ansHead, ansTail, digit);
    carry = sum/10;
    if(first != NULL) first = first -> next;
    
    if(second != NULL) second = second -> next;
    
  }
  
  return ansHead;
}

Node* add_two_LL(Node* &first, Node* &second) {
  // step 1 - reverse input
  first = reverse(first);
  second = reverse(second);

  // step 2: add 2 LL
  Node* ans = add(first, second);
  
  ans = reverse(ans);

  return ans;
}

int main() {
  Node* head1 = NULL;
  Node* tail1 = NULL;

  insertAtTail(head1, tail1, 4);
  insertAtTail(head1, tail1, 5);
      
  print(head1);

  Node* head2 = NULL;
  Node* tail2 = NULL;

  insertAtTail(head2, tail2, 3);
  insertAtTail(head2, tail2, 4);
  insertAtTail(head2, tail2, 5);

  print(head2);

  Node* head = add_two_LL(head1, head2);

  print(head);
}