// recursion practice
// assume we have to cover 10steps to reach Home
// we only need to take 1step, rest will be handled by recursion.
// this is a demo explained by Codehelp to understand recursion.

#include<iostream>
using std::cout;
using std::cin;
using std::endl;

void reachHome(int src, int dest) {

  cout<<"source: "<<src<<" destination: "<<dest<<endl;
                              // basecase
  if(src==dest) { 
    cout<<"reached home now.";
    return;
  }

  src++; // take one step.   // processing

  reachHome(src, dest);      // recursive call
}


int main() {
 int dest = 10;
 int src = 1;

 cout<<endl;

 reachHome(src, dest);
}