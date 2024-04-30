// Binary search in 2D array - level 2

#include<iostream>
#include<vector>
using namespace std;

void print_matrix(vector<vector<int>> matrix) {
  cout<<"original-matrix:\n";
  for(int i= 0; i<matrix.size(); i++) {
    for(int j = 0; j<matrix[0].size(); j++) {
      cout<<matrix[i][j]<<" ";
    }
    cout<<"\n";
  }
}

bool binary_search_2D_array_L2(vector<vector<int>> matrix, int target) {

  int rows = matrix.size();
  int cols = matrix[0].size();

  int rowIndex = 0; // assume as start
  int colIndex = cols-1; // assume as end
  // this denotes that, we are starting from the top-right end of the matrix
  
  while(rowIndex < rows && colIndex>=0) {
    int element =  matrix[rowIndex][colIndex];
    
    if(element == target) {
      return 1;
    }
    if(element < target) {
      rowIndex++;
    } else {
      colIndex--;
    }
  }
  return 0;
  
}


int main() {
  vector<vector<int>> matrix{{1, 4, 7, 11, 15}, {2, 5, 8, 12, 19}, {3, 6, 9, 13, 20}, {4, 7, 10, 14, 21}};
  int target = 9;

  print_matrix(matrix);
  binary_search_2D_array_L2(matrix, target) ? cout<<"the value "<<target<<" exists." : cout<<"the value "<<target<<" does not exist.";
}
