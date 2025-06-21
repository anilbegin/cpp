// Lec:53 - Q2  Flattening a LinkedList (Multilevel LL), into one single LL
// Tried, but I was able to generate LL with Child Nodes instead.
// Below Code is not the Actual SOution for the Question Asked
// dated: 14/04/2025 - this is the Final SOlution i.e
// using only Child Pointers for Flattening Linked List,
//  refered LeetCode Question to make sure.

// **This Code used only 'Child' pointer to Flatten the Linked list**
// The Question by CodeHelp or the explanation by COdehelp, doesnt
// if we should only use Child pointer or only Next Pointer

#include<iostream>
using namespace std;
// trying by myself check experiment
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

// void print(Node* head) {
//   Node* temp = head;
//   while(temp != NULL) {
//     cout<< temp -> data << " ";
//     temp = temp -> next;
//   }
//   cout<<endl;
// }

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

// this function is a lil Moded as was required
// all 'next' Nodes are Flattened to become first Head Node's Child 
// via the below function
Node* solve(Node* &first, Node* &second) {
  Node* temp1 = first;
  Node* next1 = temp1 -> child;
  Node* temp2 = second;
  Node* next2 = NULL; 

  while(next1 != NULL && temp2 != NULL) {
    if( temp2 -> data >= temp1 -> data && temp2 -> data <= next1 -> data) {
      temp1 -> child = temp2;
      next2 = temp2 -> child;
      temp2 -> child = next1;
      temp1 = temp2;
      temp2 = next2;
      
    } else {
      temp1 = next1;
      next1 = next1 -> child;
      if(next1 == NULL) {
        temp1 -> child = temp2;
        return first;
      }
    }
  }

  return first;
}

Node* merge(Node* &first, Node* &second) {
  if(first == NULL) return second;
  if(second == NULL) return first;

  if(first -> data < second -> data) {
    return solve(first, second);
  } else {
    return solve(second, first);
  }
}

// uses only Child pointer to flatten the Linked List
Node* flattenLinkedList(Node* &head) {
  if(head == NULL || head -> next == NULL) return head;

  Node* down = head;
  Node* right = flattenLinkedList(down -> next);
  down -> next = NULL;

  // apply merge 2 sorted Linked list
  Node* ans = merge(down, right);
  return ans;
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
  print(head);

  head = flattenLinkedList(head);
  print(head);
}
 