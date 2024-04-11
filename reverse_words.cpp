// reverse words in a string (basic - uses extra space) 
// eg: Input: "the sky is blue" Output: "blue is sky the"

#include<iostream>
using namespace std;

string reverse_words(string str) {
  int i = 0, n = str.length();
  string ans = "";
  while(i<n) {
    string temp = "";
    while(str[i] == ' ' && i<n) i++;
    while(str[i] != ' ' && i<n) {
      temp += str[i];
      i++;
    }
    if(temp.length() > 0) {
      if(ans.length() == 0) {
        ans = temp;
      } else {
        ans = temp + " " + ans;
      }
    }
  }
  return ans;
}

int main() {
  string str = "hello world!";

  cout<<reverse_words(str);
}