// split a circular linked list into 2 halves
// make 2 Circular LL of the 2 halves
// Currently only posibel to split CLL with even number of nodes.

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
    cout<<"memory for node with value " << val << " is erased." <<endl;
  }
};
// circular linked list
void insertNodeAt(Node* &head, int element, int data) {
  Node* temp = new Node(data);

  if(head == NULL) {
    head = temp;
    temp -> next = temp;
  } else {
    Node* curr = head;

    while(curr-> data != element) {
      curr = curr -> next;
      if(curr == head) {
        cout<<"element not found, please check" <<endl;
        return;
      }
    }

    temp -> next = curr -> next;
    curr -> next = temp;
  }
}
// printing CLL
void print(Node* &head) {
  if(head == NULL) cout<<"list is empty!";

  Node* curr = head;

  do {
    cout<< curr -> data << " ";
    curr = curr -> next;
  } while(curr != head);
  cout<<endl;
}

int get_length(Node* &head) {
  if(head == NULL) return 0;

  int count = 1;
  Node* curr = head;
  curr = curr -> next;
  while(curr != head) {
    count++;
    curr  = curr -> next;
  }
  return count;
}

Node* find_mid(Node* &head) {
  Node* curr = head;

  int len = get_length(head);
  int mid = len/2;

  while(--mid) {
    curr = curr -> next;
  }
  return curr;
}

Node* split_list(Node* &head, Node* &mid) {
  Node* newHead = mid -> next; // head assigned for the second-half after splitting Circular LL
  Node* curr = head;
  while(curr != mid ) {
    curr = curr -> next;
  }
  curr -> next = head;  // first split in the CLL
  
  Node* newcurr = newHead;
  Node* prev = NULL;
  while(newcurr != head) {
    prev = newcurr;
    newcurr = newcurr -> next;
  }
  prev -> next = newHead; // second split in the Circular LL
  return newHead;
}

int main() {
  Node* head = NULL;

  insertNodeAt(head, 2, 10);
  print(head);
  insertNodeAt(head, 10, 11);
  print(head);
  insertNodeAt(head, 11, 12);
  print(head);
  insertNodeAt(head, 12, 13);
  print(head);
  insertNodeAt(head, 13, 14);
  print(head);
  insertNodeAt(head, 14, 15);
  print(head);
    
  cout<<"head: " <<head -> data <<endl;

  Node* mid = find_mid(head);
//  cout<< "mid-data: " << mid -> data <<endl;
 Node* newHead = split_list(head, mid);

  print(head); // first half - new Circular LL 
  cout<<endl;
  print(newHead); // second half - new Circular LL

}
