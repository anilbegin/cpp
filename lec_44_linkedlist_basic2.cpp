// Lec 44: Linked List
// Linked list is a collection of nodes
// a single Node consists of 2 part, first is data and second is address
// the data part contains the data
// the address part contains the address for the next node
// Below program creates a basic Linked list
// We are creating a Node

#include<iostream>
using namespace std;

// example :2
class LinkedList {
    public:
        int data;
        LinkedList* next; 

    // Constructor
    LinkedList(int data) {
      this->data = data;
      this->next = NULL;
    }    
}; 

int main() {
    // Linked List with a Single Node is created with the below line    
    LinkedList* node1 = new LinkedList(10);   // we have created a HEAP
    cout<< node1 -> data <<endl; // data has value   // 10
    cout<< node1 -> next <<endl; // memory location is set to NULL   // 0
    return 0;
}

