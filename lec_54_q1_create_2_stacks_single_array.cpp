// lec 54: Question: create 2 Stacks using Single Array

#include<iostream>
using namespace std;

class TwoStack {
  int *arr;
  int top1;
  int top2;
  int size;  
  
  public:
    // constructor
    TwoStack(int s) {
      this -> size = s;
      top1 = -1;
      top2 = s;
      arr = new int[s];
    }

    void push1(int num) {
      // shows atleast one empty space is present
      if(top2 - top1 > 1) {
        top1++;
        arr[top1] = num;
      } else {  
        cout<<"stack overflow"<<endl;
      }
    }

    void push2(int num) {
      // shows atleast 1 empty space is present
      if(top2 - top1 > 1) {
        top2--;
        arr[top2] = num;
      } else {
        cout<<"stack overflow" <<endl;
      }
    }

    int pop1() {
      if(top1 >= 0) {
        int ans = arr[top1];
        top1--;
        return ans;
      } else {
        return -1;
      }
    }

    int pop2() {
      if(top2 < size) {
        int ans = arr[top2];
        top2++;
        return ans;
      } else {
        return -1;
      }
    }
};

int main() {
  TwoStack st(5);

  st.push1(10);
  st.push1(20);
  
  st.push2(100);
  st.push2(101);

  cout<<st.pop1()<<endl; // 20
  cout<<st.pop2()<<endl;  // 101
  cout<<st.pop2()<<endl;  // 100
  cout<<st.pop2()<<endl;  // -1
}



