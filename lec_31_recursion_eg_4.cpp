// recursion example
// print 'n' numbers   1, 2, 3, 4, 5

#include<iostream>
using std::cout;
using std::cin;
using std::endl;

// Head recursion
void print_count(int n) {
  if(n==0) return;

  print_count(n-1); 

  cout<<n<<" ";
}


int main() {
  int n;

  cout<<"Enter a number to Print countdown nos: "<<endl;
  cin>>n;

  print_count(n);
}