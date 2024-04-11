// addition of 2 arrays
// here 'array_reverse' functon is applied right inside the 'findArraySum' function.

#include<iostream>
#include<vector>
using namespace std;

vector<int> array_reverse(vector<int>& arr) {
  int i = 0, j = arr.size()-1;

  while(i<j) swap(arr[i++], arr[j--]);

  return arr;
}

vector<int> findArraySum(vector<int> a, int m, vector<int> b, int n) {
  int i = m-1;
  int j = n-1;
  vector<int> ans;
  int carry = 0;

  // here both num1 and num2 have same number of indexes
  while(i>=0 && j>=0) {
    int val1 = a[i];
    int val2 = b[j];

    int sum = val1 + val2 + carry;

    int carry = sum/10;
    sum = sum%10;

    ans.push_back(sum);
    i--; j--;
  }

  // here num1 has more indexes remaining to be added
  // while num2 indexes are over
  // eg: {1, 2, 3, 4} + {4}
  while(i>=0) {
    int sum = a[i] + carry;
    carry = sum/10;
    sum = sum%10;
    ans.push_back(sum);
    i--;
  }

  // here num1 indexes are over, num2 indexes are still remaining
  // eg: {4} + {1, 2, 3, 4}
  while(j>=0) {
    int sum = b[j] + carry;
    carry = sum/10;
    sum = sum%10;
    ans.push_back(sum);
    j--;
  }

  // here num1 + num2 indexes produces carry, which results in..
  // ..additional index places in the result(sum)
  // eg: {9, 2, 2} + {9, 3, 3} = {1, 8, 5, 5}
  while(carry != 0) {
    int sum = carry;
    carry = sum/10;
    sum = sum%10;
    ans.push_back(sum);
  }
  return array_reverse(ans);
}

void print_array(vector<int> result) {
  for(int i = 0; i<result.size(); i++) {
    cout<<result[i]<<" ";
  }
}

int main() {
  vector<int> num1{1, 2, 3};
  int m = 3;
  vector<int> num2{4, 5, 6};
  int n = 3;

  vector<int> ans = findArraySum(num1, m, num2, n);
  // array_reverse(ans);
  print_array(ans);
}



/*
// addition of 2 arrays
// here array_reverse function is applied separately in the main function

#include<iostream>
#include<vector>
using namespace std;

void array_reverse(vector<int>& arr) {
  int i = 0, j = arr.size()-1;

  while(i<j) swap(arr[i++], arr[j--]);
}

vector<int> findArraySum(vector<int> a, int m, vector<int> b, int n) {
  int i = m-1;
  int j = n-1;
  vector<int> ans;
  int carry = 0;

  // here both num1 and num2 have same number of indexes
  while(i>=0 && j>=0) {
    int val1 = a[i];
    int val2 = b[j];

    int sum = val1 + val2 + carry;

    carry = sum/10;
    sum = sum%10;

    ans.push_back(sum);
    i--; j--;
  }

  // here num1 has more indexes remaining to be added
  // while num2 indexes are over
  // eg: {1, 2, 3, 4} + {4}
  while(i>=0) {
    int sum = a[i] + carry;
    carry = sum/10;
    sum = sum%10;
    ans.push_back(sum);
    i--;
  }

  // here num1 indexes are over, num2 indexes are still remaining
  // eg: {4} + {1, 2, 3, 4}
  while(j>=0) {
    int sum = b[j] + carry;
    carry = sum/10;
    sum = sum%10;
    ans.push_back(sum);
    j--;
  }

  // here num1 + num2 indexes produces carry, which results in..
  // ..additional index places in the result(sum)
  // eg: {9, 2, 2} + {9, 3, 3} = {1, 8, 5, 5}
  while(carry != 0) {
    int sum = carry;
    carry = sum/10;
    sum = sum%10;
    ans.push_back(sum);
  }
  return ans;
}

void print_array(vector<int> result) {
  for(int i = 0; i<result.size(); i++) {
    cout<<result[i]<<" ";
  }
}

int main() {
  vector<int> num1{1, 2, 3};
  int m = 3;
  vector<int> num2{4, 5, 6};
  int n = 3;

  vector<int> ans = findArraySum(num1, m, num2, n);
  array_reverse(ans);
  print_array(ans);
}

*/

