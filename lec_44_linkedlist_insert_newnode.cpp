// linked list
// Create Singly Linked List
// procedure for CREATING A NEW NODE, when a new data is inserted
// insert AT HEAD/start
// New data will become the HEAD

#include<iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }    
};

// reference given 'Node* &head' why ?
// because we don't want to create a new copy
// instead we want to add new data as well as make changes only to the original linked list
void insertAtHead(Node* &head, int data) {
    // whenever a new data comes we create a..    
    //..new node (..created)
    Node* temp = new Node(data);
    temp -> next = head; // point the "next" part of temp(new node) towards the head(of old node)
    head = temp;    // make the head to be the (newly created)temp node.
}
// traversing a Linked List
// 'Node* &head' - sent the head pointer as reference
void print(Node* &head) {
    Node* temp = head;

    while(temp != NULL) {
        cout<< temp -> data << " ";
        temp = temp -> next; // the 'next' part inside temp contains the addr for next node
    }
    cout<<endl;
}

int main() {
    Node* node1 = new Node(10);

    // cout<<node1 -> data << endl;
    // cout<<node1 -> next << endl;

    // head pointed to node1
    // currently a 'head' pointer pointed at node1
    Node* head = node1;
    cout<<"current data in linked list:"<<endl;
    print(head); // 'current data' thats 'pointed by head'

    // insert new data, and make it the new head
    insertAtHead(head, 12); 

    cout<<"data in linked list, after inserting new data:"<<endl;
    print(head);
}
 