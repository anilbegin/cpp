// hardcoding 2D array input

#include<iostream>
using namespace std;

int main() {
  int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 8, 7, 6};

  // print the 2 d array

  for(int i = 0; i<3; i++) {
    for(int j = 0; j<4; j++) {
      cout<<arr[i][j]<<" ";
    }
    cout<<"\n";
  }
}