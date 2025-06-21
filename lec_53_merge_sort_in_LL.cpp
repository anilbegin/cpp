// lec : 53 Merge Sort in Linked list
// using recursion
// divide the LL into its smallest parts, ..
// ...by finding Mid and breaking a large part into 2 smaller parts
// apply 'merge 2 sorted LL algo'
// return.

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

void print(Node* head) {
  Node* curr = head;

  while(curr != NULL) {
    cout<< curr -> data << " ";
    curr = curr -> next;
  }
  cout<<endl;
  
}

Node* findMid(Node* head) {
  Node* slow = head;
  Node* fast = head -> next;

  while(fast != NULL && fast -> next != NULL) {
    slow = slow -> next;
    fast = fast -> next -> next;
  }
  return slow;
}

// merge 2 sorted linked list
Node* merge(Node* left, Node* right) {
  if(left == NULL) return right;
  if(right == NULL) return left;

  // create dummy Node as a HEAD to attach the sorted left/right LL temporarily
  Node* ans = new Node(-1); 
  Node* temp = ans;

  while(left != NULL && right != NULL) {
    if(left -> data < right -> data) {
      temp -> next = left;
      temp = left;
      left = left -> next;
    } else {
      temp -> next = right;
      temp = right;
      right = right -> next;
    }
  }

  // if 'right' LL is finised/reached NULL
  while(left != NULL) {
    temp -> next = left;
    temp = left;
    left = left -> next;
  }

  // if 'left' LL is finised/reached NULL
  while(right != NULL) {
    temp -> next = right;
    temp = right;
    right = right -> next;
  }

  // remove the dummy Node that's there at the HEAD
  ans = ans -> next;
  // return the answer
  return ans;
}

Node* mergeSort(Node* &head) {
 // base case
 if(head == NULL || head -> next == NULL) {
  return head;
 }

 // break linked list into 2 halves, afetr finding Mid
 Node* mid = findMid(head);

 Node* left = head;
 Node* right = mid -> next;
 mid -> next = NULL;

 // recursive calls to sort both halves
 left = mergeSort(left);
 right = mergeSort(right); 

 // merge both left and right halves
 Node* result = merge(left, right);

 return result;
}

int main() {
  Node* head = NULL;
  Node* tail = NULL;

  insertAtTail(head, tail, 2);
  insertAtTail(head, tail, 1);
  insertAtTail(head, tail, 6);
  insertAtTail(head, tail, 7);
  insertAtTail(head, tail, 4);
  insertAtTail(head, tail, 5);
  insertAtTail(head, tail, 3);

  print(head);
  cout<<"sorted: " <<endl;
  Node* sorted = mergeSort(head);
  print(sorted);
}
