// return subsequences of a string
// lec 37 : Q2

#include<iostream>
#include<vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

class Solution {
    private:
        void solve(string str, string output, int index, vector<string>& ans) {
            if(index >= str.length()) {
                if(output.length() > 0) { // the empty string subsequence is not required hence.
                    ans.push_back(output);
                }
                return ;
            }
            // exclude
            solve(str, output, index+1, ans);

            //include
            char element = str[index];
            output.push_back(element);
            solve(str, output, index+1, ans);
        }
    public:
        vector<string> subsequences(string str) {
            vector<string> ans;
            string output = "";
            int index = 0;
            solve(str, output, index, ans);
            return ans;
        }
        void print_vector_string(vector<string> ans) {
            for(int i=0; i<ans.size(); i++) {
                cout<<"\""; // these quotes just for good OP presentation
                cout<<ans[i];
                cout<<"\"";
                cout<<" ";
            }
        }     
};

int main() {
    string str = "abc";

    Solution sol;
    vector<string> ans = sol.subsequences(str);
    sol.print_vector_string(ans);
}