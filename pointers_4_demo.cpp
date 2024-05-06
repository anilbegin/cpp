// pointers demo - 4

#include<iostream>
using namespace std;

int main() {
int num = 5;
int a = num;
//a++;

int *p = &num;

cout<<endl<<"before: value in num: "<<num; // before: value in num: 5
(*p)++;
cout<<endl<<"after: value in num: "<<num; // after: value in num: 6
cout<<endl<<"value of *p: "<<*p;  // value of *p: 6

int *q = p; // assuming that q stores value stored in p(stores address of num);

cout<<endl<<"value of p: "<<p;    // value of p: 0x61ff00
cout<<endl<<"value of q: "<<q;    // value of q: 0x61ff00
cout<<endl<<"value of *q: "<<*q;  // value of *q: 6

}
