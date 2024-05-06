// row wise input of 2D array and then print

#include<iostream>
using namespace std;

void print_2D_array(int arr[][4], int mRows, int nCols) {
  cout<<endl<<"Array matrix: \n";
  for(int i = 0; i<mRows; i++) {
    for(int j = 0; j<nCols; j++) {
      cout<<arr[i][j]<<" ";
    }
    cout<<"\n";
  }
}

// row wise input 2D array
void accept_2D_array(int arr[][4], int mRows, int nCols) {
  cout<<"enter array values:\n";
  for(int i = 0; i<mRows; i++) {
    for(int j = 0; j<nCols; j++) {
      cin>>arr[i][j];
    }
  }
  print_2D_array(arr, mRows, nCols);
}

int main() {
  int arr[3][4];
  int mRows = 3;
  int nCols = 4;
  accept_2D_array(arr, mRows, nCols);

}