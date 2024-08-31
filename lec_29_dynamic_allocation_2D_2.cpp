// Dynamic allocation of 2D arrays
// m - rows and n - cols
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

// Dynamic allocation of 2D arrays
// m - rows and n - cols
int main() { 
  int row;   

  cout<<"Enter rows: ";
  cin>>row;

  int col;

  cout<<"Enter cols: ";
  cin>>col;

  // creating a 2D array of rows*cosl
  int** arr = new int*[row]; // (rows) array created for int* type
  for(int i = 0; i<row; i++) {
    arr[i] = new int[col];    // (cols) each int*row will have cols array
  }

  cout<<"enter 2D values:\n";
  for(int i=0; i<row; i++) {
    for(int j = 0; j<col; j++) {
      cin>>arr[i][j];
    }
  }

  cout<<"values are:\n";
   for(int i=0; i<row; i++) {
    for(int j = 0; j<col; j++) {
      cout<<arr[i][j]<<" ";
    }
    cout<<"\n";
  }

  // Manually clear Memory Allocated in HEAP
  for(int i = 0; i<row; i++) {
    delete [] arr[i];
  }

  delete [] arr;
}