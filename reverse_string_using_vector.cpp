// reverse a string code using vector<char>

#include<iostream>
#include<vector>
using namespace std;

void reverse_string(vector<char>& str) {
  int i = 0, j = str.size()-1;

  while(i < j) {
    swap(str[i++], str[j--]);
  }
}

int main() {
  vector<char> name{'h','e','l','l','o'};
  reverse_string(name);
  for(char a : name) { // c++ version of forEach
    cout<<a;
  }
}
