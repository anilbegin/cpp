// unique element in an array
#include<iostream>
using namespace std;

int unique_elem(int arr[], int n) {
  
  for(int i = 0; i<n; i++) {
    int count = 0;
    for(int j = 0; j<n; j++) {
      if(arr[j] == arr[i]) count++;
    }
    if(count == 1) cout<<arr[i]<<" ";
  }
  
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