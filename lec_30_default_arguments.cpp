// default arguments

#include<iostream>
using std::cout;
using std::endl;
            // default arguments can only begin from the right most entity.
            // meaning you cant say.. void print_array(int arr[], int n=0, int start)
            // here n = 0 is not the right most parameter, this will throw error
            // int start = 0 // default argument
void print_array(int arr[], int n, int start = 0) {
  for(int i = start; i<n; i++) {
    cout<<arr[i]<<" ";
  }
}
 
int main() {
   int arr[] = {1, 4, 9, 11, 14};
   int n = 5;

   print_array(arr, n, 2);    // 9 11 14
   cout<<endl;
   print_array(arr, n);         // 1 4 9 11 14

}
