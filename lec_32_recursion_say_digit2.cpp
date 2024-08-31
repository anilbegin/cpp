// recursion - say digits - part 2
// eg: i/p: 450 o/p: four five zero

#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

/* // previous code (recursive call is the last lin)..
     produced reverse order in words
Enter a number: 1234
fourthreetwoone
// Solution is below
 */

void sayDigit(int n, string arr[]) {
  // base case
  if(n==0) return;

  // processing
  int digit = n%10; 
  n = n/10;
  
  //recursive call
  sayDigit(n, arr);

  // printing this line later - solves the reverse order issue
  cout<<arr[digit];
}


int main() {
  string arr[10] = {"zero","one", "two","three", "four",
                    "five", "six", "seven", "eight", "nine"};
  int n;

  cout<<"Enter a number: ";
  cin>>n;

  sayDigit(n, arr);
}
