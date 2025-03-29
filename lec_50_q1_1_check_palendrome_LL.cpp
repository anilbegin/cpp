// Lec:50 - check Palendome in an LL  
// Approach 1

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
    cout<< temp -> data << " ";
    temp = temp -> next;
  }
}

class Solution {
  private:
    bool check_palendrome(vector<int> arr) {
      int n = arr.size();
      int s = 0;
      int e = n-1;

      while(s<=e) {
        if(arr[s] != arr[e]) return 0;
        s++;e--;
      }
      return 1;
    } 
  
  public:
    // push all data in linked list to an array
    // then apply normal check-palendrome function
    bool is_palendrome(Node* &head) {
      vector<int> arr;
      
      Node* curr = head;
      while(curr != NULL) {
        arr.push_back(curr -> data);
        curr = curr -> next;
      }
      
      return check_palendrome(arr);
    }
};

int main() {
  Node* head = NULL;
  Node* tail = NULL;

 insertAtTail(head, tail, 1);
 insertAtTail(head, tail, 5);
 insertAtTail(head, tail, 2);
 insertAtTail(head, tail, 2);
 insertAtTail(head, tail, 5);
 insertAtTail(head, tail, 1);
 //insertAtTail(head, tail, 2);
 
 print(head);
 cout<<endl;
 
 Solution sol;
 sol.is_palendrome(head) ? cout<<"is palendrome" : cout<<"not palendrome";
}
