// HW: solving insertion sort with recursion
// stack of cards representing unsorted array, pick one card place it aside
/// this is the sorted stack
// another card pick place it such that n-1 > n
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

        void insertion_sort(int arr[], int n, int i) { // n==7, 
            // basecase
            if(i==n) return;

            int temp = arr[i];
            for(int j = i - 1; j>=0; j--) {
                if(arr[j] > temp) {
                    arr[j+1] = arr[j];
                    arr[j] = temp;
                } else break;
            }
            
            insertion_sort(arr, n, i+1);
        }
};

int main() {
    int arr[] = {10, 14, 12, 11, 13, 16, 15, 21, 20, 19, 18, 17};
    int n = sizeof(arr)/sizeof(arr[0]);

    Solution sol;
    sol.insertion_sort(arr, n, 1);
    cout<<endl;
    sol.print_array(arr, n);
}
