// chain macros
/*
  The chain macros are those macros that expand to another macro definition. 
  For example, in a macro definition in which another macro is defined, 
  the parent macro will be expanded first and then the child macro will 
  be expanded.

*/


#include<iostream>
using std::cout;

#define CLERK 10
#define WORKER CLERK


int main() {
  cout<<WORKER;
}
