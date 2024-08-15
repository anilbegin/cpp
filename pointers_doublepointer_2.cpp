// double pointer inside function

#include<iostream>
using namespace std;

void update(int **p2) {
  cout<<endl<<"&p2 - inside function:"<<&p2<<endl; // 0x61fef0
//  p2 = p2+1;
  // kuch change hoga ?? - No Change

//  *p2 = *p2 + 1;
  // change hua 
  /*
    before update- i: 5
    before update- p: 0x61ff08
    before update- p2: 0x61ff04
    after update- i: 5
    after update- p: 0x61ff0c
    before update- p2: 0x61ff04
  */          

  **p2 = **p2 + 1;  // OP: after update- i: 6
  /*
    before update- i: 5        
    before update- p: 0x61ff08 
    before update- p2: 0x61ff04
    after update- i: 6
    after update- p: 0x61ff08  
    before update- p2: 0x61ff04
  */
}

int main() {
  int i = 5;
  int* p = &i;
  int** p2 = &p;

  cout<<"&p2 - outside function:"<<&p2<<endl; // 0x61ff04
  cout<<endl<<"before update- i: "<<i;
  cout<<endl<<"before update- p: "<<p;
  cout<<endl<<"before update- p2: "<<p2;
  update(p2);
  cout<<endl<<"after update- i: "<<i;
  cout<<endl<<"after update- p: "<<p;
  cout<<endl<<"before update- p2: "<<p2;
}