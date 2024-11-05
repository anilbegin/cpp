// reverse a string using "recursion"

#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

class Solution {
    public:             // passed by reference using '&'
         void recur_str_reverse(string& str, int i, int j) {
            //below line just for debugging
            cout<<"call received for "<<str<<endl;
            
            // basecase
            if(i>j) return;

            std::swap(str[i], str[j]);
            i++;
            j--;

            // recursive call    
            recur_str_reverse(str, i, j);
         }       
};

int main() { 
    string str = "abcde";

    Solution sol;    
    sol.recur_str_reverse(str, 0, str.length()-1);
    cout<<str;
}