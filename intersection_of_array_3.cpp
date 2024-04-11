// TWO POINTER APPROACH
// MIZGF.C Mashup - Write This Down  youtube search
#include<iostream>
#include<vector>
using namespace std;

vector<int> array_intersection(int arr[], int size_arr, int brr[], int size_brr) {
  vector<int> newArr;
  int i = 0, j = 0;
  while(i < size_arr && j < size_brr) {
    if(arr[i] < brr[j]) {
      i++;
    }
    if(arr[i] == brr[j]) {
      newArr.push_back(arr[i]);
      i++;
      j++;
    }
    if(arr[i] > brr[j]) {
      j++;
    }
  }
  return newArr;
} 

int main() {
  int arr[] = { 2, 3, 5, 7, 8};
  int brr[] = {4, 5, 8};
   
  int size_arr = sizeof(arr)/sizeof(arr[0]);
  int size_brr = sizeof(brr)/sizeof(brr[0]);

  cout<<"the intersection of arrays is: "<<endl;
  vector<int> ans = array_intersection(arr, size_arr, brr, size_brr);

  for(int i = 0; i<ans.size(); i++) {
    cout<<ans[i]<<" ";
  }
}
