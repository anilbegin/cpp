// Binary Search in 2D array

#include<iostream>
#include<vector>
using namespace std;

void print_matrix(vector<vector<int>> matrix) {
  for(int i = 0; i<matrix.size(); i++) {
    for(int j = 0; j<matrix[0].size(); j++) {
      cout<<matrix[i][j]<<" ";
    }
    cout<<"\n";
  }
}

bool binary_search(vector<vector<int>> matrix, int target) {

  int row = matrix.size();
  int col = matrix[0].size();

  int start = 0;
  int end = row*col-1;

  int mid = start + (end-start)/2;

  while(start<=end) {
    int element = matrix[mid/col][mid%col]; 
    // mid/col = row-num in matrix
    // mid%col = col-num in matrix

    if(element == target) {
      return 1;
    } 
    if(element<target) {
      start = mid+1;
    } else {
      end = mid-1;
    }
    mid = start+(end-start)/2;
  }
  return 0;
}

int main() {
  vector<vector<int>> matrix{{1, 2, 4, 8}, {10, 11, 12, 13}, {14, 15, 16, 18}};
  int target = 1;

  print_matrix(matrix);
  binary_search(matrix, target) ? cout<<"\nthe value "<<target<<" exists" : cout<<"\nthe value "<<target<<" does not exist";
}
