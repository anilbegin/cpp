// Lec:50 - check Palendome in an LL  
// Approach 2 - 

#include<iostream>
#include<vector>
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
    cout<<"memory for node with value " << val << " has been erased." <<endl;
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
  Node* temp = head;

  while(temp != NULL) {
    cout<< temp -> data <<" ";
    temp = temp -> next;
  }
  cout<<endl;
}

// Approach - 1
// bool isPalendrome(vector<int> arr) {
//   int s = 0, e = arr.size()-1;

//   while(s<=e) {
//     if(arr[s] != arr[e]) return 0;
//     s++;e--;
//   }
//   return 1;
// }

// bool check_palendrome(Node* &head) {
//   vector<int> arr;
//   Node* curr = head;

//   while(curr != NULL) {
//     arr.push_back(curr -> data);
//     curr = curr -> next;
//   }

//   if(isPalendrome(arr)) return 1;
//   return 0;
// }

class Solution {
  private: // step - 1
    Node* getMid(Node* &head) {
      Node* slow = head;
      Node* fast = head -> next;

      while(fast != NULL && fast -> next != NULL) {
        fast = fast -> next -> next;
        slow = slow -> next;
      }
      return slow;
    }
  public: // step - 2
    Node* reverse(Node* &head) {
      Node* prev = NULL;
      Node* curr = head;
      Node* forward = NULL;

      while(curr != NULL) {
        forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
      }
      return prev;
    }

    bool isPalendrome(Node* head) {
      if(head == NULL || head -> next == NULL) {
        return true;
      }

      // step 1 - find mid
      Node* mid = getMid(head);

      // step 2 - reverse list after middle
      Node* temp = mid -> next;

      mid -> next = reverse(temp);

      // step-3 : compare both halves
      Node* head1 = head;
      Node* head2 = mid -> next;

      while(head2 != NULL) { 
        // in case of odd no.of elements 'head2 != NULL' condition..
        // .. helps in ignoring the element in the exact middle 
        // .. being taken to consideration. 
        if(head1 -> data != head2 -> data) {
          return false;
        }
        head1 = head1 -> next;
        head2 = head2 -> next;
      }

      // step 4 - repeat step 2
      temp = mid -> next;

      mid -> next = reverse(temp);

      return true;
    }
};

int main() {
  Node* head = NULL;
  Node* tail = NULL;

  insertAtTail(head, tail, 1);
  insertAtTail(head, tail, 2);
  // insertAtTail(head, tail, 3);
  // insertAtTail(head, tail, 4);
  // insertAtTail(head, tail, 3);
  insertAtTail(head, tail, 2);
  insertAtTail(head, tail, 1);
  print(head);

  //check_palendrome(head) ? cout<<"it is palendrome" : cout<<"not palendrome";
  Solution sol;
  sol.isPalendrome(head) ? cout<<"LL is palendrome" : cout<<"not Palendrome";
}
