// revise : Implement K stack using a single array
// Approach 2 : Optimized approach
// Instead of dividing the array into fixed segments, we implement a free list structure..
// ..that keeps track of available spaces in the array.

#include<iostream>
using namespace std;

class nStack {
  int *arr;
  int *top;
  int *next;
  int n, s;
  int freespot;

  public:
  //constructor
  nStack(int N, int S) { // n = number of stacks s = size of array, 
    n = N;
    s = S;
    arr = new int[s];
    top = new int[n];
    next = new int[s];
    // top initialize
    for(int i= 0 ;i<n; i++) {
      top[i] = -1;
    }
    for(int i= 0 ;i<s; i++) {
      next[i] = i+1;
    }
    // update last index to -1
    next[s-1] = -1;
    freespot = 0;
  }

  bool push(int x, int m) { // x is the data , mth stack
    // check for overlfow
    if(freespot == -1) {
      return false;
    }
    //step:1 find index
    int index = freespot;
    // step:2 
    freespot = next[index];

    // insert element into array
    arr[index] = x;

    // update next
    next[index] = top[m-1];  // purane wala top stored into next[index]..
                             // ..to link with previous element in stack
    // its 0 based indexing hence 'm-1', 
    // update top
    top[m-1] = index;
    
    return true;
  }

  int pop(int m) {
    // check underflow
    if(top[m-1] == -1) {
      cout<<"empty stack\n";
      return -1;
    }

    int index = top[m-1];

    top[m-1] = next[index];

    next[index] = freespot;
    freespot = index;

    return arr[index];
  }
  // my own function to check data in array
  void print_array() {
    for(int i = 0; i<s; i++) cout<<arr[i]<<" ";
  }
};

int main() {
    nStack ns(3, 9);

    ns.push(10, 1) ? cout<<"Added\n" : cout<<"FAIL\n";
    ns.push(20, 2) ? cout<<"Added\n" : cout<<"FAIL\n";
    ns.push(30, 3) ? cout<<"Added\n" : cout<<"FAIL\n";

    ns.push(11, 1) ? cout<<"Added\n" : cout<<"FAIL\n";
    ns.push(31, 3) ? cout<<"Added\n" : cout<<"FAIL\n";
    ns.push(12, 1) ? cout<<"Added\n" : cout<<"FAIL\n";

    ns.push(13, 1) ? cout<<"Added\n" : cout<<"FAIL\n";
    ns.push(32, 3) ? cout<<"Added\n" : cout<<"FAIL\n";
    ns.push(21, 2) ? cout<<"Added\n" : cout<<"FAIL\n";

    ns.print_array(); //10 20 30 11 31 12 13 32 21
    cout<<endl;
    cout<<ns.pop(1)<<endl; // 13 
    cout<<ns.pop(2)<<endl; // 21
    cout<<ns.pop(1)<<endl; // 12
    cout<<ns.pop(1)<<endl; // 11
    cout<<ns.pop(1)<<endl; // 10

    ns.push(41, 1) ? cout<<"Added\n" : cout<<"FAIL\n";
    ns.push(51, 2) ? cout<<"Added\n" : cout<<"FAIL\n";
    ns.push(42, 1) ? cout<<"Added\n" : cout<<"FAIL\n";

    ns.push(43, 1) ? cout<<"Added\n" : cout<<"FAIL\n";
    ns.push(44, 1) ? cout<<"Added\n" : cout<<"FAIL\n";

    cout<<ns.pop(1)<<endl; // 44
    cout<<ns.pop(3)<<endl; // 32
    cout<<ns.pop(3)<<endl; // 31


}