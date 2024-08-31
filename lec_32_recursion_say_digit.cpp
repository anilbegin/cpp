// // recursion - say digits - part 1
// eg: i/p: 450 o/p: four five zero
// !-- issue in this code, digits are printed in reverse

#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

/* // current code produces reevrse order in words
Enter a number: 1234
fourthreetwoone
// Solution to the problem in next file
 */

void sayDigit(int n, string arr[]) {
  // base case
  if(n==0) return;

  // processing
  int digit = n%10; 
  n = n/10;
  cout<<arr[digit]<<" ";

  //recursive call
  sayDigit(n, arr);
}


int main() {
  string arr[10] = {"zero","one", "two","three", "four",
                    "five", "six", "seven", "eight", "nine"};
  int n;

  cout<<"Enter a number: ";
  cin>>n;

  sayDigit(n, arr);
}
