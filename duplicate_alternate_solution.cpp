// find duplicate in the array of size N.
// with elements from 1 to N-1
// there is a single element which has a duplicate
// find that element
// alternate Soln by me.

#include<iostream>
#include<algorithm>
using namespace std;

int find_duplicate(int arr[], int length) {
  int duplicate;
  
  sort(arr, arr + length);

  for(int i = 0; i < length; i++) {
    if(arr[i] == arr[i + 1]) return arr[i];
  }
  
}

int main() {
  int arr[] = {4, 1, 3, 4, 2};

  int length = sizeof(arr)/sizeof(arr[0]);

 int ans = find_duplicate(arr, length);

  cout<<"the number "<<ans<<" has a duplicate";
}

