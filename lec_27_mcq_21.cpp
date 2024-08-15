// MCQ

#include<iostream>
using namespace std;

int main() {
 int first = 100;
 int *p = &first;
 int **q = &p;
 int second = ++(**q);
 int *r = *q; // *r means its pointing to *q. *q is pointing to whats stored in p
              // p stores variable "first's" address
              // whats in first's address is value '101'
 ++(*r);      // so ++*r is 102
 
 cout<<"first: "<<first<<" second: "<<second;
 //  first 102 second: 101

 return 0; 

}

