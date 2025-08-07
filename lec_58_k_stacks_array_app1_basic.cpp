// Lec 58 - Implement k stacks in a single array
// Approach 1
// Basic Approach,Fixed Partition
// dividing a n-size array into k-parts
// refered CGPT

#include<iostream>
using namespace std;

class kStacks {
  int *arr; // the actual array
  int *top; // array to store top element of all stacks
  int *base;  // array to store starting index of each stack
  int n; // n = total size of array
  int k; // k = number of stacks  
  int stackSize;

  public:
  // constructor
  kStacks(int n, int k) {
    this -> n = n;
    this -> k = k;
    stackSize = n/k;
    
    arr = new int[n];
    top = new int[k];
    base = new int[k];
    
    for(int i = 0 ;i<k; i++) {  // if k = 3, stack will be 0, 1, 2
      base[i] = i * stackSize; // say k = 3, then.. 
                               // 1st stack = indexes 0, 1, 2
                               // 2nd stack = indexes 3, 4, 5
                               // 3rd stack = indexes 6, 7, 8
                               // here 0 , 3, and 6 are bases
      top[i] = base[i] - 1; // check Division of array implementation Fig 
    }
    
  }
  // destructor (arr, top and base where dynamically created)
  ~kStacks() {
    delete[] arr;
    delete[] top;
    delete[] base;
  }
  // function to push element 'x' into snth Stack
  void push(int x, int sn) {
    if(sn < 0 || sn >= k) {
      cout<<"Invalid stack number \n";
      return;
    }

    // check for overflow
    if(top[sn] == base[sn] + stackSize - 1) {
      cout<<"stack " <<sn<<" is full.\n";
      return;
    }
    top[sn]++;
    arr[top[sn]] = x;
  }
  // pop operation
  int pop(int sn) {
     if(sn < 0 || sn >= k) {
      cout<<"Invalid stack number \n";
      return -1;
    }

    // check for underflow
    if(top[sn] < base[sn]) {
      cout<<"Stack "<<sn<<" is empty \n";
      return -1;
    }
    int val = arr[top[sn]];
    top[sn]--;
    return val;
  }
  // peek operation
  int peek(int sn) {
    if(top[sn] < base[sn]) {
      cout<<"Stack "<<sn<<" is empty \n";
      return -1;
    }
    return arr[top[sn]]; 
  }

  bool isEmpty(int sn) {
    return top[sn] < base[sn];
  }
};

int main () {
  kStacks ks(9, 3);

  ks.push(31, 0);
  ks.push(32, 0);
  ks.push(33, 0);
  
  ks.push(10, 1);
  ks.push(11, 1);
  ks.push(12, 1);

  ks.push(20, 2);
  ks.push(22, 2);
  ks.push(24, 2);
  ks.push(25, 2); // stack 2 is full

  ks.push(90, 3); // invalid stack number
  
  cout<<ks.peek(1); // 12
  cout<<endl;
  cout<<ks.pop(0);   // 33
  cout<<endl;
  cout<<ks.pop(0);   // 32
  cout<<endl;
  cout<<ks.pop(0);   // 31
  cout<<endl;
  cout<<ks.pop(0);   // stack 0 is empty

}
