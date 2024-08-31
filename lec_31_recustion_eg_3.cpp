// recursion example
// print 'n' numbers - 5, 4, 3, 2, 1

#include<iostream>
using std::cout;
using std::cin;
using std::endl;

// Tail recursion
void print_count(int n) {
  if(n==0) return;

  cout<<n<<" ";

  print_count(n-1); 
}


int main() {
  int n;

  cout<<"Enter a number to Print countdown nos: "<<endl;
  cin>>n;

  print_count(n);
}