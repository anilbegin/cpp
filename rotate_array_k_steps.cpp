// rotate array by k steps
// rotate array by 2 steps
// eg: {2, 4, 6, 8, 10} k = 2
// OP :  {8, 10, 2, 4, 6}

#include<iostream>
#include<vector>
using namespace std;

void rotate(vector<int>& nums, int k) {
  vector<int> temp(nums.size());

  for(int i = 0; i<nums.size(); i++) {
    temp[(i+k)%nums.size()] = nums[i];
  }

  nums = temp;
}

void print_array(vector<int> nums) {
  for(int i = 0; i<nums.size(); i++) {
    cout<<nums[i]<<" ";
  }
}

int main() {
  vector<int> nums{1, 2, 3, 4, 5, 6, 7};
  int k = 3;
  
  rotate(nums, k);
  print_array(nums);
}

/*
// notice the changes in the code that need to be done when..
// .. we use normal array instead of Vector data type
// rotate an array by k steps

#include<iostream>
#include<vector>
using namespace std;

void array_rotate(vector<int>& arr, int k) {
  vector<int> temp(arr.size()); 
  for(int i = 0; i<arr.size(); i++) {
    temp[(i+k)%arr.size()] = arr[i];
  }

  arr = temp; 
}

void print_array(vector<int> arr) {
  for(int i = 0; i<arr.size(); i++) {
    cout<<arr[i]<<" ";
  }
}

int main() {
  vector<int> nums{2, 4, 6, 8, 10};
  int k = 2;

  array_rotate(nums, k);
  print_array(nums);
}
*/