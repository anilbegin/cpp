// find duplicate elements in an array
// i.e the elements that are appearing TWICE

#include<iostream>
#include<vector>
using namespace std;

void find_duplicates(int arr[], int size) {
  vector<int> newArr;
  for(int i = 0; i< size; i++) {
    int count = 0;
    for(int j = 0 ; j<size; j++) {
      if(arr[i] == arr[j]) count ++;
    }
  //  if(count == 2) cout<<arr[i]<<" ";
      if(count == 2) newArr.push_back(arr[i]);  
  }

 for(int i = 0; i < newArr.size(); i++) {
  cout<<newArr[i]<<" ";
 }
}

int main() {
  int arr[] = {4, 3, 2, 7, 8, 2, 3, 1};

  int size = sizeof(arr)/sizeof(arr[0]);

  find_duplicates(arr, size);  
}