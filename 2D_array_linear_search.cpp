// linear search in 2D arrays

#include<iostream>
using namespace std;

// i - row, j - col
// we need to specify the column size in function parameter..else compiler throws error
bool isPresent(int arr[][4], int target, int i, int j) {
  for(int i = 0; i<3; i++) {
    for(int j = 0; j<4; j++) {
      if(arr[i][j] == target) {
        return 1;
      }
    }
  }
  return 0;
}

int main() {
  int arr[3][4];
// i - row, j - column
  for(int i = 0; i<3; i++) {
    for(int j = 0; j<4; j++) {
      cin>>arr[i][j];
    }
  }
 

cout<<"Output: \n";
  //print
  for(int i = 0; i<3; i++) {
    for(int j = 0; j<4; j++) {
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }

// Linear Search part
  cout<<"enter the element to search"<<endl;
  int target;
  cin>>target;

  if(isPresent(arr, target, 3, 4)) {
    cout<<"Element Found "<<endl;
  } else {
    cout<<"element not found";
  }

}

