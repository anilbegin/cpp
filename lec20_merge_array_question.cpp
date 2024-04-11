// merge two sorted arrays *without using extra space*
// multiple Solns from Comment cant understand, check later
// understood on 22/11/2023 from youtube reference
// merge sorted array answer example
// Input... nums1[]={1, 2, 3, 0, 0, 0} nums2[]={2, 5, 6};
// m = 3, n = 3
// length nums1 = m + n
// Output.. {1, 2, 2, 3, 5, 6}
// the final OP should not be returned by the function..
// .. but instead be stored inside nums1[]
#include<iostream>
#include<vector>
//#include<algorithm>

using namespace std;
#include<iostream>
#include<vector>
//#include<algorithm>
using namespace std;

// below soln is Understood on 22/11/2023
void array_merge(int nums1[], int m, int nums2[], int n) {
  int i = m - 1, j = n - 1, k = m + n - 1;

  while(i >= 0 && j >= 0) {
    if(nums1[i] > nums2[j]) {
      nums1[k] = nums1[i];
      i--;
      k--;
    } else {
      nums1[k] = nums2[j];
      j--;
      k--;
    }
  }

  while(i >= 0) {
     nums1[k] = nums1[i];
     k--;
     i--;
  }
  while(j>= 0) {
    nums1[k] = nums2[j];
    k--;
    j--;
  }
  
}

void array_print(int nums1[], int size) {
  for(int i = 0; i<size; i++) {
    cout<<nums1[i]<<" ";
  }
}

int main() {
  int nums1[] = {2, 5, 6, 0, 0, 0};
  int nums2[] = {1, 2, 3};
  int m = 3, n = 3;
  array_merge(nums1, m, nums2, n);

  array_print(nums1, 6);

}

// End of Soln

/* // Soln 1
void merge_arrays(int nums1[], int m, int nums2[], int n) {
  int i = m - 1;
  int j = n - 1;
  int k = m + n -1;
  while(j>=0) {
    if(i>=0 && nums1[i] > nums2[j]) {
      nums1[k]=nums1[i];
      i--;
      k--;
    } else {
      nums1[k]=nums2[j];
      k--;
      j--;
    }
  }
}


int main() {
  int nums1[] = {1, 2, 3, 0, 0, 0};
  int m = 3;
  int nums2[] = {2, 5, 6};
  int n = 3;

  merge_arrays(nums1, m, nums2, n);

  for(int i = 0; i<m+n; i++) {
    cout<<nums1[i]<<" ";
  }
}
*/ // end of Soln1  // Gives correct output


// Try to understand the Soln, Soln taken from a Comment under the Video
// Another Soln Below from comment

// Soln 2 - the only one I inderstood for now
/*
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        nums1.resize(m);
        for(int i=0;i<n;i++){
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(),nums1.end());
    }

void array_print(vector<int> nums1) {
    for(int i = 0; i<nums1.size(); i++) {
    cout<<nums1[i]<<" ";
  }
}

int main() {
  vector<int> nums1{1, 2, 3, 0, 0, 0};
  vector<int> nums2{2, 5, 6};
  int m = 3, n = 3; 
  merge(nums1, m, nums2, n);

  array_print(nums1);
}
*/    
// end of Soln2  // Gives correct output


//another soln
/*
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1 , j = n - 1 , k = m + n - 1;
        while(i >= 0 && j >= 0){
           if(nums2[j] > nums1[i]){
               nums1[k--] = nums2[j--];
           }
           else{
               nums1[k--] = nums1[i--];
           }
           
        }
        while(j >= 0){
            nums1[k--] = nums2[j--];
        }
    }

void array_print(vector<int> nums1) {
    for(int i = 0; i<nums1.size(); i++) {
    cout<<nums1[i]<<" ";
  }
}   

int main() {
  vector<int> nums1{1, 2, 3, 0, 0, 0};
  vector<int> nums2{2, 5, 6};
  int m = 3, n = 3; 
  merge(nums1, m, nums2, n);

  array_print(nums1);
}
*/