#include<iostream>
#include<algorithm>
using namespace std;

int main() {
  int a = 3; 
  int b = 5;

  cout<<"Max of a and b: "<<max(a, b)<<endl;
  cout<<"Min of a and b: "<<min(a, b)<<endl;
  swap(a, b);
  cout<<"swapped a = "<<a<<" b = "<<b<<endl;

  string abcd = "abcd";

  reverse(abcd.begin(), abcd.end());

  cout<<"reverse of abcd: "<<abcd;
}