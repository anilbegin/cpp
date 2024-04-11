// find the total number of occurence of a particular number

#include<iostream>
using namespace std;

//finding right most occurence
int last_occurence(int arr[], int size, int find) {
  int start = 0, end = size - 1;
  int ans = -1;
  int mid = (start + end)/2;

  while(start<=end) {
    if(arr[mid] == find) {
      ans = mid;
      start = mid + 1;
    } else if(arr[mid] < find) {
      start = mid + 1;
    } else {
      end = mid - 1;
    }
    mid = (start + end) /2;
  }
  return ans;
}

// finding left most occurence;
int first_occurence(int arr[], int size, int find) {
  int start = 0, end = size - 1, ans = -1;

  int count = 0;

  int mid = (start + end)/2;
  while(start<=end) {
    if(arr[mid] == find) {
      ans = mid;
      end = mid - 1;
    } else if(arr[mid] < find) {
      start = mid + 1;
    } else if(arr[mid] > find) {
      end = mid - 1;
    }
    mid = (start + end) /2;
  }
  return ans;
}

int total_occurence(int first, int last) {
  return  last == -1 && first == -1 ? 0 :(last - first) + 1;
}

int main() {
  int arr[] = {1, 2, 3, 3, 5};
  int find = 3;
  int size = sizeof(arr)/sizeof(arr[0]);

 int first =  first_occurence(arr, size, find);
 int last = last_occurence(arr, size, find);

 int total = total_occurence(first, last); 

// cout<<first<<" ";
// cout<<last<<" ";
 cout<<"the number "<<find<<" has occured "<<total<<" times in the array";

}