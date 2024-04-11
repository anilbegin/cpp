// find if the given number X, can be
// found as a sum of triplet of nums within an array

#include<iostream>
using namespace std;

void find_triplet(int arr[], int size, int x) {

  for(int i = 0; i<size; i++) {
    for(int j = i+1; j <size; j++) {
          for(int k = j+1; k <size; k++) {
         
         if(arr[i] + arr[j] + arr[k] == x) 
            cout<< arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl; 
      }
    }
  }
}

int main() {
  int arr[7] = {2, -3, 4, 5, 7, 8, 1};
  int x = 8;

  find_triplet(arr, 7, x);

}
