// How char count is stored in array

#include<iostream>
#include<vector>
using namespace std;
/*
void print_array(vector<int> arr) {
  for(int i : arr) {
    cout<<arr[i];
  }
}
*/

void print_array(vector<int> arr) {
  for(int i = 0; i<arr.size(); i++) {
    cout<<arr[i];
  }
}


void char_count_store(string str) {
  vector<int> arr(26, 0);
  char ch;
  for(int i = 0; i<str.length(); i++) {
    ch = str[i];
    int number = 0;
    if(ch>='a' && ch<='z') {
      number = ch - 'a';
    } else {
      number = ch - 'A';
    }
    arr[number]++;
  }
  print_array(arr);
}

int main() {
  string str = "aabccdefghijklmnoopqrstuvwxyyz";

  char_count_store(str);
}
