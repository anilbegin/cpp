// spiral print problem

#include<iostream>
#include<vector>
using namespace std;

void print_array(vector<int> matrix) {
  for(int i = 0; i<matrix.size(); i++) {
      cout<<matrix[i]<<" ";
    }
}

void print_2d_array(vector<vector<int>> matrix) {
  cout<<"Original 2D array:\n";
  for(int i = 0; i<matrix.size(); i++) {
    for(int j = 0; j<matrix[0].size(); j++) {
      cout<<matrix[i][j]<<" ";
    }
    cout<<"\n";
  }
}

vector<int> spiral_print(vector<vector<int>> matrix) {
 cout<<"\nspiral-print:\n";
  vector<int> ans;
  int row = matrix.size(); //number of  rows
  int col = matrix[0].size(); // number of columns;

  int total = row*col; // total elements in the matrix
  int count = 0;

  int startingRow = 0;
  int startingCol = 0;
  int endingRow = row-1;
  int endingCol = col-1;

  while(count<total) {
    // print starting row
    for(int index = startingCol; count<total && index<=endingCol; index++) {
      ans.push_back(matrix[startingRow][index]);
      count++;
    }
    startingRow++;
    // print ending column
    for(int index = startingRow; count<total && index<=endingRow; index++) {
      ans.push_back(matrix[index][endingCol]);
      count++;
    }
    endingCol--;
    // print ending row
    for(int index = endingCol; count<total && index>=startingCol; index--) {
      ans.push_back(matrix[endingRow][index]);
      count++;
    }
    endingRow--;
    // print starting columns
    for(int index = endingRow; count<total && index>=startingRow; index--) {
      ans.push_back(matrix[index][startingCol]);
      count++;
    }
    startingCol++;
  }
  return ans;
}

int main() {
  vector<vector<int>> matrix{{1, 4, 2, 8}, {9, 1, 9, 1}, {1, 2, 3, 4}};
//  vector<vector<int>> matrix{{7, 4, 2}, {9, 1, 9}, {1, 2, 3}, {5, 6, 7}};
  print_2d_array(matrix);
  vector<int> ans = spiral_print(matrix);
  print_array(ans);
}