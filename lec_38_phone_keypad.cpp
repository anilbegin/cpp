// lec 38: Phone keypad problem

#include<iostream>
#include<vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

class Solution {
    public:
        
        void print_vector_string(vector<string> ans) {
            for(int i= 0; i<ans.size(); i++) {
                cout<<ans[i]<<" ";
            }
        }
        void solve(string digit, string output, int index, vector<string>& ans, string mapping[]) {
            // basecase
            if(index >= digit.length()) {
                ans.push_back(output);
                return ;
            }

            int number = digit[index] - '0';
            string value = mapping[number];
            
            for(int i = 0; i<value.length(); i++) {
                output.push_back(value[i]);
                solve(digit, output, index+1, ans, mapping);
                output.pop_back();  // back-tracking
                // without backtracking the OP will be below line
                // ad ade adef abd abde abdef abcd abcde abcdef
            }

        }
        
        vector<string> letterCombinations(string digit) {
            vector<string> ans;

            if(digit.length() == 0) 
                    return ans;

            string output = "";
            int index = 0;
            string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
            solve(digit, output, index, ans, mapping);
            return ans;
        }
};

int main() {
    string str = "23";

    Solution sol;
    vector<string> ans = sol.letterCombinations(str);
    sol.print_vector_string(ans);
}
//OP: ad ae af bd be bf cd ce cf
