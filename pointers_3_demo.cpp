// pointers demo - 3

#include<iostream>
using namespace std;

int main() {
int *ptr = 0;

int i = 5;
ptr = &i;  

cout<<endl<<"value in address stored in ptr: *ptr: "<<*ptr;
cout<<endl<<"ptr(should show address stored): "<<ptr;
}