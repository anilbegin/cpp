// intersection of array
// means common elements between two arrays

#include<iostream>
#include<vector>
using namespace std;

vector<int> intersection(int arr[], int brr[], int size_arr, int size_brr) {
  vector<int> ans;
  for(int i = 0; i < size_arr; i++) {
    int element = arr[i];
    for(int j = 0 ; j < size_brr; j++) {
      if(element == brr[j]) {
        ans.push_back(element);
        brr[j] = -123456; // replaced the first intersection value wth a garbage value
        break;
      }
    }
  }
  return ans;
}

int main() {
  int arr[] = {1, 2, 2, 3, 3, 6};
  int brr[] = {2, 3, 4, 6};
  

  int size_arr = sizeof(arr)/sizeof(arr[0]); 
  int size_brr = sizeof(brr)/sizeof(brr[0]);
  
  vector<int> ans = intersection(arr, brr, size_arr, size_brr);

  for(int i = 0; i<ans.size(); i++) {
    cout<<ans[i]<<" ";
  }
}
 
