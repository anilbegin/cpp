// largest row sum Problem
// row 0, row 1, row 2
#include<iostream>
using namespace std;

// i - row, j - col
// function which prints - row wise sum
void printSum(int arr[][4], int i, int j) {
  int l_sum = -1;
  int row;
  cout<<"addition of rows:\n";
  for(int i = 0; i<3; i++) {
    int sum = 0;
    for(int j = 0; j<4; j++) {
      sum += arr[i][j];
    }
    if(sum > l_sum) {
      l_sum = sum;
      row = i;
    }
    cout<<sum<<"\n";
    
  }
  cout<<"\n";
  cout<<"\nlargest sum: "<<l_sum;
  cout<<"\nlargest row is: row "<<row;
} 

int main() {
  int arr[3][4];

  cout<<"Enter the elements: "<<endl;
// i - row, j - column
  for(int i = 0; i<3; i++) {
    for(int j = 0; j<4; j++) {
      cin>>arr[i][j];
    }
  }
 

cout<<"Printing the array: \n";
  //print
  for(int i = 0; i<3; i++) {
    for(int j = 0; j<4; j++) {
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }

printSum(arr, 3, 4);

}

