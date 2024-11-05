// HW: solving selection sort with recursion
// smallest value in the array gets placed in its correct position first
// tried by myself

#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

class Solution {
    private:
       
    public:
        void print_array(int arr[], int n) {
            for(int i = 0; i<n; i++) cout<<arr[i]<<" ";
        }
        void selection_sort(int arr[], int n, int i) {
            // basecase
            if(n==0 || n==1) return;
        //    print_array(arr, n); // check if sorting is working as expected
        //    cout<<endl;
            int minIndex = i;
            
            for(int j = 1; j<n; j++) {
                if(arr[j] < arr[minIndex]) minIndex = j;
            }
            std::swap(arr[i], arr[minIndex]);
            
            selection_sort(arr+1, n-1, 0);
        }
};

int main() {
    int arr[] = {12, 14, 10, 11, 13, 16, 15};
    int n = sizeof(arr)/sizeof(arr[0]);

    Solution sol;
    sol.selection_sort(arr, n, 0);
    cout<<endl;
    sol.print_array(arr, n);
}
