// return maximum occuring character in a string

#include<iostream>
using namespace std;

char get_max_char(string str) {
  int arr[26] = {0};
  for(int i = 0; i<str.length(); i++) {
    char ch = str[i];
    // lowercase
    int number = 0;
    if(ch>='a' && ch<='z') {
      number = ch - 'a';
    } else { //uppercase
      number = ch - 'A';
    }
    arr[number]++;
  }
  int maxi = -1, ans = 0;
  for(int i = 0; i<26;i++) {
    if(arr[i] > maxi) {
      ans = i;
      maxi = arr[i];
    }
  }
  
  return 'a'+ans;
 
}

int main() {
  string str = "ixigo";

  cout<<get_max_char(str);
}
