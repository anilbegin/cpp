// find a to the power b, using Optimized recursion

#include<iostream>
using std::cout;
using std::cin;
using std::endl;

class Solution {
    public:
        int a_power_b(int a, int b) {
            //basecase
            if(b==0) return 1;
            if(b==1) return a;

                    // recursive call  
            int ans = a_power_b(a, b/2);

            if(b%2==0) {// if b is even
                return ans * ans;
            } else {// if b is odd
                return a * ans * ans;
            }
        }
};

int main() {
    int a, b;

    cout<<"a^b = ??"<<endl;
    cout<<"enter value for a: ";
    cin>>a;
    cout<<"enter value for b: ";
    cin>>b;

    Solution sol;
    cout<<a<<" ^ "<<b<<": "<<sol.a_power_b(a, b);
}