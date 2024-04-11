#include<iostream>
using namespace std;

void printArray(int arr[], int size) {
  cout <<"print the array values:"<< endl;
  for(int i = 0; i<size; i++) {
    cout << arr[i];
  }
  cout <<endl;
  cout<<"Array value have been printed"<<endl;
}

int main() {
  int fourth[15] = {2, 7};
  int third[5] = {1};

  printArray(fourth, 15);
  printArray(third, 5);
}