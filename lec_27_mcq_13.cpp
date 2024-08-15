// MCQ

#include<iostream>
using namespace std;

int main() {
  int arr[] = {11, 21, 31, 41};
  int *ptr = arr+1; // question had arr++ - bu compiler error 'lvalue required as increment operand'
  
  cout<<*ptr; // 21

  return 0;
}

