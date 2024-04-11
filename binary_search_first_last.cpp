// find the first or left most position of an element in ...
// .. the sorted array
// then also find the right most or last occrance of an element in ...
// .. the sorted array
#include<iostream>
#include<utility>
using namespace std;

int first_occurence(int arr[], int size, int find) {
  int start = 0, end = size - 1;
  int ans = -1;
  int mid = (start + end)/2;

  while(start<=end) {
    if(arr[mid] == find) {
      ans = mid;
      end = mid - 1;
    } else if(arr[mid] < find) {
      start = mid + 1;
    } else if (arr[mid] > find){
      end = mid - 1; 
    }

    mid = (start + end)/2;
  }
  return ans;
}

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
    } else if (arr[mid] > find){
      end = mid - 1; 
    }

    //mid = (start + end)/2;
     mid = start + (end - start)/2;
  }
  return ans;
}

int main() {
  int arr[] = {1, 1, 1, 2, 3, 3, 3, 5, 6, 7};

  int find = 3;
  int size = sizeof(arr)/sizeof(arr[0]);

   pair<int , int> p;
   p.first = first_occurence(arr, size, find);
   p.second = last_occurence(arr, size, find);
 // int first = first_occurence(arr, size, find);
//  int last = last_occurence(arr, size, find);



  cout<<"the left most occerence of "<<find<<" is on index "<<p.first<<endl;
  cout<<"the right most occerence of "<<find<<" is on index "<<p.second<<endl;
}

