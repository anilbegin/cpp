// Move all 0s in an array to the right or end while maintaining the relatibe order of elements
// {0, 1, 0, 3, 12};

#include<iostream>
#include<vector>
using namespace std;

void moveZeroes(vector<int>& nums) {
  int nonZero = 0;

  // moving all non zero elements to the left
  for(int j = 0; j<nums.size(); j++) {
    if(nums[j] != 0) {
      swap(nums[j], nums[nonZero]);
      nonZero++;
    }
  }
  
}

array_print(vector<int> nums) {
  for(int i = 0; i<nums.size(); i++) {
    cout<<nums[i]<<" ";
  }
}

int main() {
 // vector<int> nums{0, 1, 0, 3, 12, 0};
  vector<int> nums{14, 120, 3, 0, 12, 0, 99, 144, 32, 0 , 455, 0 , 12, 1, 341, 12, 0}; //testing

  moveZeroes(nums);
  array_print(nums);
}
