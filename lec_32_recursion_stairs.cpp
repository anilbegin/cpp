// //recursion to climb stair(can take only 1 or 2 steps at once max)

#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int countWaystoClimbStair(int n) {
  if(n<0) return 0;
  if(n==0) return 1; // 1 way to reach from step 0 to 0th step.
  // n==0 , then jump a step on same place 

  int ans = countWaystoClimbStair(n-1) + countWaystoClimbStair(n-2);

  return ans;
}


int main() {

  int n;

  cout<<"Enter number of stairs to climb: ";
  cin>>n;

  cout<<countWaystoClimbStair(n);
}
