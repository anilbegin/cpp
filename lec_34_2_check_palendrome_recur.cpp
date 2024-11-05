// Check palendrome using recursion

#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

class Solution {
    private:
       void print_array(string str, int i, int j) {
        while(i<=j) {
            cout<<str[i]<<" ";
            i++;
        }
       }
    public:
    
        // done by myself             
        bool check_palendrome(string str, int i, int j) {
            // debugging
            print_array(str, i, j);
            cout<<endl;
            // basecase
            if(i>j) return 1;

            if(str[i] != str[j]) return 0;
            i++;j--;

            // recursive function
            return check_palendrome(str, i, j);
        }
        
        // done by Codehelp
    /*    
        bool check_palendrome(string str, int i, int j) {
            // debugging
            print_array(str, i, j);
            cout<<endl;
            if(i>j) return true;

            if(str[i] != str[j])
                return false;
            else {
                 //recursive call
                 return check_palendrome(str, i+1, j-1);
            }
        }
    */     
       
};

int main() { 
    string str = "malayalam";

    Solution sol; 
// by myself       
    sol.check_palendrome(str, 0, str.length()-1) ? cout<<"is palendrome" : cout<<"not palendrome";
// by codheelp
/*
    bool is_Palendrome = sol.check_palendrome(str, 0, str.length()-1);
    if(is_Palendrome) {
        cout<<"It is palendrome";
    } else {
        cout<<"not palendrome";
    }
*/    
}
