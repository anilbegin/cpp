// Sort 0's 1's and 2's
// eg: {0, 2, 2, 1, 0, 1, 1, 0, 2} sort O/P
// {0, 0, 0, 1, 1, 1, 2, 2, 2}
// below Soln refered from Youtube Channel: Curious Chahar
// https://www.youtube.com/watch?v=R6HoR6NyMOA
// Algotihm applied is called 'Dutch flag Algo'
// Explanation for Dutch Flag Algo below link: take U Forward (Youtube Channel)
// https://www.youtube.com/watch?v=tp8JIuCXBaU
#include<iostream>
using namespace std;

void printArray(int arr[], int size) {
  for(int i = 0; i< size; i++) {
    cout<<arr[i]<<" ";
  }
}

void sort012(int arr[], int size) {
  int low = 0;
  int mid = 0;
  int high = size -1;

  while(mid <= high) {
  //  cout<<"low is: "<<arr[low]<<" "<<"mid is: "<<arr[mid]<<" "<<"high is: "<<arr[high]<<endl;
  //  printArray(arr, size);
  //  cout<<endl;
    if(arr[mid] == 0) {
      swap(arr[mid], arr[low]);
      mid++;
      low++;

    } else if(arr[mid] == 1) {
      mid++;
    } else {
      swap(arr[mid], arr[high]);
      high--;
    }
  }


}

int main() {
  int arr[] = {0, 2, 2, 1, 0, 1, 1, 0, 2};

  int size = sizeof(arr)/sizeof(arr[0]);

  sort012(arr, size);
  printArray(arr, size);
}