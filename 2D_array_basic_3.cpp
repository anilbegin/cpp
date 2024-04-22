// hardcoding 2D array input
// easier way to specify which row has what value

#include<iostream>
using namespace std;

int main() {
  int arr[3][4] = {{1, 11, 111, 1111}, {2, 22, 222, 2222}, {1, 12, 123, 1234}};

  // print the 2 d array

  for(int i = 0; i<3; i++) {
    for(int j = 0; j<4; j++) {
      cout<<arr[i][j]<<" ";
    }
    cout<<"\n";
  }
}
