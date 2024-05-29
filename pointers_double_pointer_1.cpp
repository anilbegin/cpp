// double pointer

#include<iostream>
using namespace std;

int main() {
 int i = 10;
 int* ptr = &i;
 int** ptr2 = &ptr;
 double val = 1.00101;
 double* ptr3 = &val; 
 float val2 = 1.01;
 float* ptr4 = &val2;

 cout<<"*ptr: "<<*ptr;
 cout<<endl<<"ptr: "<<ptr;
 cout<<endl<<"&i: "<<&i;
 cout<<endl<<"**ptr2: "<<**ptr2;
 cout<<endl<<"*ptr2: "<<*ptr2;  
 cout<<endl<<"&ptr: "<<&ptr;
 cout<<endl<<"ptr2: "<<ptr2;
 cout<<endl<<"val: "<<val;
 cout<<endl<<"*ptr3: "<<*ptr3; 
 cout<<endl<<"sizeof(val): "<<sizeof(val);
 cout<<endl<<"sizeof(ptr3): "<<sizeof(ptr3);
 cout<<endl<<"sizeof(i):"<<sizeof(i);

}