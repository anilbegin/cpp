// return True if number of occurence of each value is unique
// eg:  {1, 2, 2, 3, 3, 3}
// here occurence of {1} is 1 time, {2} is 2 times, {3} is 3 times.
// now thats a unique number of occurence for each value.
// eg2: {1, 2, 3, 3, 4}
// here occurence of {1} is 1 time, {2} is 1 time, {3} is 2 times,
// and {4} is 1 time, So, {1}, {2} and {3} have common times of
// occurences and therefor not unique.

// using c++ in-built sort function
#include<iostream>
#include<algorithm>
#include<vector>
#include<typeinfo>
using namespace std;

// accepts a vector array stating number of occurences.
// returns True if each occurence is unique 
bool check_unique(vector<int>& newArr,int len) {
  for(int i = 0; i< len;  i++) {
    if(newArr[i] == newArr[i + 1]) {
      return false;
    }
  }
  return true;
}

// counts the number of occurence of each element in array.
// returns an array vector showing count of occurence of each element.
vector<int> array_elem_occurence(int arr[], int len) {
  vector<int> newArr; // used to store in new data of array member occurences
  int i = 0;
  while(i < len ) {
    int count = 1;
    for(int j = i+1; j<len; j++) {
      if(arr[i] == arr[j]) {
        count++;
      } else {
        break;
      }
    }
    newArr.push_back(count);
    i = i + count;
  }

  return newArr;
}

int main() {
 // int arr[5] = {2, 2, 1, 1, 3};
  int arr[] = {2, 2, 2, 3, 3, 3, 3, 1};

  int len = sizeof(arr)/sizeof(arr[0]); // Op's the total no.of blocks occupied by array. 
  
  // cout<<arr<<endl; // 0x61fef4 //op's this address of the first value stored.
  
  std::sort(arr, arr + len);//Sorting demo array
  cout<<"the elements in the array are[SORTED]: "<<endl;
  for(int i = 0; i<len; i++) {
    cout<<arr[i]<<" ";
  }
  cout<<endl;

  vector<int> newArr = array_elem_occurence(arr, len);

  len =  sizeof(newArr)/sizeof(newArr[0]);
 // cout<<"Length of new Array,showing no.of occurences for each element: "<<len<<endl;
  // Length of new Array, showing no.of occurences: 3 

  cout<<"Occurence count of each Array elements are: ";
  for(int i = 0; i<len; i++) {
    cout<<newArr[i]<<" ";  // OP: Array elements are: 2 2 1
  }
 
 // cout<<typeid(newArr).name(); // OP: St6vectorIiSaIiEE 

  sort(newArr.begin(), newArr.end());
  // the previous syntax of sort(arr, arr + len);, does not work here, 
  // probably becuase newArr is a Vector type 

  cout<<endl<<"SORTED: ";
  for(int i = 0; i<len; i++) {
    cout<<newArr[i]<<" ";  // OP: Array elements are: 2 2 1
  }
  cout<<endl;

 if(check_unique(newArr, 3)) {
  cout<<"TRUE, No.of occurence of each value is unique";
 } else {
  cout<<"FALSE, No.of occurence of each value NOT unique";
 }
}

