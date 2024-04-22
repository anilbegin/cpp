// column wise sum of a 2D array ??

#include<iostream>
using namespace std;

// i - row, j - col
// function which prints - row wise sum
void printSum(int arr[][4], int i, int j) {
  cout<<"addition of cols:\n";
  for(int j = 0; j<4; j++) {
    int sum = 0;
    for(int i = 0; i<3; i++) {
      sum += arr[i][j];
    }
    cout<<sum<<" ";
  }
  cout<<"\n";
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

