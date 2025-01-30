// Lec 44: Linked List
// Linked list is a collection of nodes
// a single Node consists of 2 part, first is data and second is address
// the data part contains the data
// the address part contains the address for the next node
// Below program creates a basic Linked list
// We are creating a Node

#include<iostream>
using namespace std;

class Node {
    public:
        int data; // data part of the node
        Node* next; // address part of the node

};

int main() {

    Node* node1 = new Node();   // we have created a HEAP
    cout<< node1 -> data <<endl; // data has garbage value   // 0
    cout<< node1 -> next <<endl; // memory location is garbage value   // 0
    return 0;
}
/*
// example :2
class LinkedList {
    public:
        int data;
        LinkedList* next; 
}; 

int main() {

    LinkedList* node1 = new LinkedList();   // we have created a HEAP
    cout<< node1 -> data <<endl; // data has garbage value   // 0
    cout<< node1 -> next <<endl; // memory location is garbage value   // 0
    return 0;
}

 */