#include<iostream>
#include<vector>
using namespace std;

vector<int> array_intersection(int arr[], int size_arr, int brr[], int size_brr) {
  vector<int> newArr;
  for(int i = 0 ; i < size_arr; i++) {
    int element = arr[i];
    for(int j = 0; j<size_brr; j++) {
      if(element < brr[j]) break;
      
      if(element == brr[j]) {
        newArr.push_back(element);
        brr[j] = -12345;
      } 
    }
  }
  return newArr;
} 

int main() {
  int arr[] = {2, 3, 5, 7, 8};
  int brr[] = {4, 5, 8};
   
  int size_arr = sizeof(arr)/sizeof(arr[0]);
  int size_brr = sizeof(brr)/sizeof(brr[0]);

  cout<<"the intersection of arrays is: "<<endl;
  vector<int> ans = array_intersection(arr, size_arr, brr, size_brr);

  for(int i = 0; i<ans.size(); i++) {
    cout<<ans[i]<<" ";
  }
}