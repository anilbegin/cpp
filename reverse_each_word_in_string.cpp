// 557. reverse words in a string III
// i/p: the sky is blue   o/p: eht yks si eulb

#include<iostream>
#include<algorithm>
using namespace std;

string reverse_each_word_in_string(string str) {
    int i = 0;

    for(int j = 0; j<str.length(); j++) {
        if(str[j] == ' ') {
            reverse(str.begin()+i, str.begin()+j);
            i = j+1;
        }
    }
    reverse(str.begin()+i, str.end());
  return str;  
}

int main() {
    string str = "the sky is blue";

    cout<<reverse_each_word_in_string(str);    
}

