// print in wave form
// wave print problem
// i.e print the 2D array as..
/* 1 2 3 4
   5 6 7 8
   3 3 2 2 
*/ 
// OP: 1, 5, 3, 3, 6, 2, 3, 7, 2, 2, 8, 4
#include<iostream>
#include<vector>
using namespace std;

// wave form
// i - row, j - col
void waveForm(vector<vector<int>> arr, int nRows, int mCols) {
//  vector<int> ans;
  cout<<"\nWaveform: ";
  for(int j = 0; j<mCols; j++) {
    // j&1 - denotes - if column is Odd
    if( j&1) {
      // odd-Index bottom to top
      for(int i = nRows-1; i>=0; i--) {
        cout<<arr[i][j]<<" ";
    //  ans.push_back(arr[i][j]);
      }
    } else {
      // even-Index top to bottom
      for(int i = 0; i<nRows; i++) {
        cout<<arr[i][j]<<" ";
    //  ans.push_back(arr[i][j]);  
      }
    }
  }
//  return ans;
}

int main() {
  vector<vector<int>> arr{{3, 4, 5, 1}, {6, 7, 8, 2}, {9, 10, 11, 3}};
//  vector<vector<int>> arr{{1, 2, 3, 4}, {5, 6, 7, 8}, {3, 3, 2, 2}};
  //int nRows = 3;
  int nRows = arr.size();
  //int mCols = 4;
  int mCols = arr[0].size();
/*
  cout<<"Enter the elements: "<<endl;
// i - row, j - column
  for(int i = 0; i<3; i++) {
    for(int j = 0; j<4; j++) {
      cin>>arr[i][j];
    }
  }
*/ 

cout<<"Printing the array: \n";
  //print
  for(int i = 0; i<nRows; i++) {
    for(int j = 0; j<mCols; j++) {
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }

waveForm(arr, nRows, mCols);

}

