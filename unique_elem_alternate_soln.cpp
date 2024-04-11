// unique element in an array
// works for Odd number of array elems, when..
// we have to find oinly one element thats unique 
#include<iostream>
using namespace std;

void unique_elem(int arr[], int n) {
  int ans = 0;
  for(int i = 0; i<n; i++) {
   ans = ans^arr[i];
    
  }
  cout<<ans;
}

int main() {
  int n;

  cout<<"Enter size of the array: ";
  cin>>n;

  int arr[n];
  cout<<"Enter the elements for the array: ";
  for(int i = 0; i<n; i++) {
    cin>>arr[i];
  }

  unique_elem(arr, n);
}
