// Lec 35: merge sort using recursion (explanation not clear)
// refered Take u forward lecture on Merge sort
// refered lecture on merge sort by Anuj bhaiya

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

        void merge(int arr[], int s, int mid, int e) {
            int i = s, j = mid + 1, k = s;
            int brr[s+e+1] = {0};

            while(i<=mid && j<=e) {
                if(arr[i] < arr[j]) {
                    brr[k] = arr[i];
                    k++;i++;
                } else {
                    brr[k] = arr[j];
                    k++;j++;
                }
            }
            while(i<=mid) brr[k++] = arr[i++];
            while(j<=e) brr[k++] = arr[j++];

            for(int i = s; i<=e; i++) {
                arr[i] = brr[i];
            }

        }
        void merge_sort(int arr[], int s, int e) {
            // basecase
            if(s>=e) return;

            int mid = s + (e - s)/2;
            merge_sort(arr, s, mid);
            merge_sort(arr, mid+1, e);
            merge(arr, s, mid, e);
        }
       
};

int main() {
    int arr[] = {11, 14, 12, 10, 16, 13, 15};
    int n = sizeof(arr)/sizeof(arr[0]);

    Solution sol;
    sol.merge_sort(arr, 0, n-1);
    sol.print_array(arr, n);
}
