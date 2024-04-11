// merge sort, ..uses recurrsion

#include<iostream>
using namespace std;

void merge(int arr[], int start, int mid, int end) {
    int i = start, j = mid + 1, k = start;
    int temp[start+end+1] = {0};

    while(i<=mid && j<=end) {

        if(arr[i] < arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
        }
    }

    while(i<=mid) temp[k++] = arr[i++];
    while(j<=end) temp[k++] = arr[j++];

    for(int k = start; k<=end; k++) {
        arr[k] = temp[k];
    }
}

void merge_sort(int arr[], int start, int end) {
    if(start < end) {

        int mid = start + (end - start)/2;

        merge_sort(arr, start, mid);
        merge_sort(arr, mid+1, end);

        merge(arr, start, mid, end);
    }
}

void print_array(int arr[], int size) {
    for(int i = 0; i<size; i++) {
        cout<<arr[i]<<" ";
    }
}

int main() {
    int arr[] = {14, 41, 1, 5, 3, 4, 2, 6};
    int n = 8;

    merge_sort(arr, 0, n-1);
    print_array(arr, n);
}