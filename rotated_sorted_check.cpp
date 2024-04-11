// check if an array is rotated sorted

#include<iostream>
#include<vector>
using namespace std;

bool rotated_sorted(vector<int> nums) {
  int count = 0;

  for(int i = 1; i<nums.size(); i++) {
    if(nums[i-1] > nums[i]) count++;
  }
  if(nums[nums.size()-1] > nums[0]) count++;

  return count<=1; // returns TRUE only if count == 1, or when..
          // .. count = 0 i.e when all values in array are same.  
}

int main() {
  vector<int> nums{10,14, 20};

  bool check = rotated_sorted(nums);

  check ? cout<<"its rotated and sorted" : cout<<"unsorted array"; 
}

