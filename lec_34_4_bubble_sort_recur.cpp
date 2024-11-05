// bubble sort using recursion

#include<iostream>
using std::cout;
using std::cin;
using std::endl;

class Solution {
    public:
        void print_array(int arr[], int n) {
            for(int i = 0; i<n; i++) cout<<arr[i]<<" ";
        }
        void bubble_sort(int arr[], int n) {
            // basecase
            if(n==0 || n==1) return;

            // place the ith largest element to the end of array
            for(int i = 0; i<n-1; i++) {
                if(arr[i] > arr[i+1]) std::swap(arr[i], arr[i+1]);
            }
            
            bubble_sort(arr, n-1);

        }
};

int main() {
    int arr[] = {4, 1, 5, 3, 2, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int count = 1;
    Solution sol;
    sol.bubble_sort(arr, n);
    sol.print_array(arr, n);
}