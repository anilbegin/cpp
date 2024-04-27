// rotate matrix to 90 degrees for an n*n matrix
// Soln: first find the transpose of the matrix..
// ..then reverse each row of the transpose matrix 
// Below code demos a step wise solution:
#include<iostream>
#include<vector>
using namespace std;

void print_matrix(vector<vector<int>> matrix) {
  cout<<"\n";
  for(int i = 0; i<matrix.size(); i++) {
    for(int j = 0; j<matrix[0].size(); j++) {
      cout<<matrix[i][j]<<" ";
    }
    cout<<"\n";
  }
}

// step-1 - transpose
void transpose(vector<vector <int>>& matrix) {
  cout<<"\ntranspose matrix:\n";
  for(int i = 0; i<matrix.size(); i++) {
    for(int j = i; j<matrix[0].size(); j++) {
      swap(matrix[i][j], matrix[j][i]);
    }
  }
}

// step-2 reverse each row
void reverse_rows(vector<vector <int>>& matrix) {
  cout<<"\nreverse the rows";
  for(int i = 0; i<matrix.size(); i++) {
    int l = 0, r = matrix[0].size()-1;
    while(l<r) {
      swap(matrix[i][l], matrix[i][r]);
      l++;
      r--;
    }
  }
}

int main() {
  vector<vector<int>> matrix{{1, 2, 3, 4}, {5, 6, 7, 8}, {0, 0, 1, 2}, {1, 0, 0, 2}}; // 4*4
//  vector<vector<int>> matrix{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; // 3*3

  cout<<"original ";
  print_matrix(matrix);
  transpose(matrix); // find transpose of matrix
  print_matrix(matrix);
  reverse_rows(matrix); // reverse the transposed matrix
  print_matrix(matrix);
}
