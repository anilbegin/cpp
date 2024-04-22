// 2-D array basics

#include<iostream>
using namespace std;

int main() {
  int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 0, 9, 8, 7};
  /*
    Output:
          1 2 3 4
          5 6 7 8
          0 9 8 7
  */

/*
// i - row, j - column
  for(int i = 0; i<3; i++) {
    for(int j = 0; j<4; j++) {
      cin>>arr[i][j];
    }
  }
*/  

cout<<"Output: \n";
  //print
  for(int i = 0; i<3; i++) {
    for(int j = 0; j<4; j++) {
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
}

