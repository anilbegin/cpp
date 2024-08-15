// MCQ

#include<iostream>
using namespace std;

int main() {
 int first = 110;
 int *p = &first;
 int **q = &p;
 int second = (**q)++ + 9; // **q has a post increment operator
 // hence value inside variable 'first' gets updated, but older value of 110 gets added to 9.
 cout<<"first: "<<first<<" "<<" second: "<<second; 
 // first: 111   second: 119
 

 return 0; 

}

