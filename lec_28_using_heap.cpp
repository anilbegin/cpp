// How to create and use Variable size array using HEAP

#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int getSum(int *arr, int n) {
  int sum = 0;

  for(int i = 0; i<n; i++) {
    sum+=arr[i];
  }
  return sum;
}

int main() {
 int n;

 cout<<"Enter size: ";
 cin>>n;

 int* arr = new int[n]; // allocated memory using Heap

 for(int i = 0; i<n; i++) {
  cin>>arr[i];
 }

 int ans = getSum(arr, n);

 cout<<endl<<"sum: "<<ans;
}