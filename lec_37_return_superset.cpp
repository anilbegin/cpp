// Lec 37 : Q1
// return superset of the array (return all possible subsets)

#include<iostream>
#include<vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;

class Solution {
    private:
        void solve(vector<int> nums, vector<int> output, int index, vector<vector<int>>& ans) {
            // basecase
            if(index >= nums.size()) {
                ans.push_back(output);
                return;
            }

            //exclude
            solve(nums, output, index+1, ans);

            // include
            int element = nums[index];
            output.push_back(element);
            solve(nums, output, index+1, ans);
        }
    public:
        void print_2D_array(vector<vector<int>> nums) {
            for(int i= 0; i<nums.size(); i++) {
                for(int j = 0; j<nums[i].size(); j++) {
                    cout<<nums[i][j]<<" ";
                }
                cout<<"\n";
            }
        }
        vector<vector<int>> subsets(vector<int>& nums) {
            vector<vector<int>> ans;
            vector<int> output;
            int index = 0;
            solve(nums, output, index, ans);
            
            return ans;

        }
        
};

int main() {
    vector<int> nums{1, 2, 3, 4};
//    vector<vector<int>> arr{{1, 2}, {1, 2, 3}, {1, 2, 3, 4}}; // testing manual OP
    Solution sol;
    vector<vector<int>> ans = sol.subsets(nums);
    sol.print_2D_array(ans);
}
