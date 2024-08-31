// Dynamic allocation of 2D arrays
// n rows , n cols
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main() { 
  int n;   // for an n*n matrix creation

  cout<<"Enter value: ";;
  cin>>n;

  // creating a 2D array of n*n
  int** arr = new int*[n]; // array created for int* type
  for(int i = 0; i<n; i++) {
    arr[i] = new int[n];    // each int* will have array
  }

  cout<<"enter 2D values:\n";
  for(int i=0; i<n; i++) {
    for(int j = 0; j<n; j++) {
      cin>>arr[i][j];
    }
  }

  cout<<"values are:\n";
   for(int i=0; i<n; i++) {
    for(int j = 0; j<n; j++) {
      cout<<arr[i][j]<<" ";
    }
    cout<<"\n";
  }

}