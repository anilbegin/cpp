// Lect 36 Quick sort using recursion
// quick sort recursion algorithm
// it uses divide and conquer method
// code done by myself

#include<iostream>
using std::cout;
using std::cin;
using std::endl;

class Solution {
    private:

    public:
    void print_array(int arr[], int n) {
        for(int i = 0; i<n; i++) {
            cout<<arr[i]<<" ";
        }
    }
    int partition(int arr[], int s, int e) {
        int pivot = arr[s];
        int count = 0;
        for(int i=s+1; i<=e; i++) {
            if(arr[i] < pivot) count++;
        }
        int pivotIndex = s + count;
        std::swap(arr[pivotIndex], arr[s]);

        int i = s, j = e;
        while(i< pivotIndex && j > pivotIndex) {
            while(arr[i] < pivot) i++;
            while(arr[j] > pivot) j--;

            if(i< pivotIndex && j > pivotIndex) {
                std::swap(arr[i], arr[j]);
                i++;j--;
            }
        }
        return pivotIndex;
    }
    void quick_sort(int arr[], int s, int e) {
        if(s>=e) return;

        int pivot = partition(arr, s, e);

        quick_sort(arr, s, pivot - 1);
        quick_sort(arr, pivot+1, e);
    }
};

int main() {
    int arr[] = {9, 4, 4, 8, 5, 6, 2, 3, 10, 1};
    int n = sizeof(arr)/sizeof(arr[0]);

    Solution sol;
    sol.quick_sort(arr, 0, n-1);
    sol.print_array(arr, n);
}