// char arrays, strings
// class usage, 
// what happens when we dont use the line "using namespace std;"

#include<iostream>
#include<algorithm>
#include<vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

class Solution {

  private:
    char to_lowercase(char ch) {
      if(ch>='a' && ch<='z' || ch>='0' && ch<='9') {
        return ch;
      } else {
        char temp = ch - 'A' + 'a';
        return temp;
      }
    }

  bool valid_char(char ch) {
    if(ch>='a' && ch<='z' || ch>='A' && ch<='Z' || ch>='0' && ch<='9') return 1;
    return 0;
  }  

  public: 
    int get_length(char ch[]) {
      int count = 0;

      for(int i = 0; ch[i] != '\0'; i++) count++;
      return count;
    }

    // char
    void string_reverse(char ch[]) {
      int s = 0, e = get_length(ch)-1;

      while(s<e) std::swap(ch[s++], ch[e--]);
    }

    // vector<char> s {“h”, “e”, “l”, “l”, “o”} 
    void str_reverse(vector<char>& ch) {
      int s = 0, e = ch.size()-1;

      while(s<e) std::swap(ch[s++], ch[e--]); 
    }

    // Ma1layal1am
    bool check_palendrome(char ch[]) {
      int s = 0, e = get_length(ch)-1;

      while(s<e) {
        if(ch[s] != ch[e]) return 0;
        s++;e--;
      }
      return 1;
    }

    // 5?36@6?35
    bool chk_palendrome(char ch[]) {
      int s = 0, e = get_length(ch)-1;

      while(s<e) {
        while(!valid_char(ch[s])) s++;
        while(!valid_char(ch[e])) e--;
        if(to_lowercase(ch[s]) != to_lowercase(ch[e])) return 0;
        s++;e--;
      }
      return 1;
    }

    // a man, a plan, a canal: {panam{a}}
    bool valid_palendrome(string str) {
      string temp = "";

      for(int i = 0; i<str.length(); i++) {
        if(valid_char(str[i])) {
          temp.push_back(to_lowercase(str[i]));
        }
      }
      
      int i = 0, j = temp.length()-1;
      while(i<j) {
        if(temp[i] != temp[j]) return 0;
        i++;j--;
      }
      return 1;
    }

    // i/p: the sky is blue o/p: blue is sky the
    string reverse_sentence(string str) {
      string ans = "";
      int i = 0, n = str.length();

      while(i<n) {
        string temp = "";
        while(str[i] == ' ' && i<n) i++;
        while(str[i] != ' ' && i<n) {
          temp += str[i];
          i++;
        }
        if(temp.length()>0) {
          if(ans.length() == 0) {
            ans = temp;
          } else {
            ans = temp + " " + ans;
          } 
        }
      }
      return ans;
    }

    // i/p: the sky is blue o/p: eht yks si eulb
    string reverse_order_char(string str) {
      int i = 0;

      for(int j = 0; j<str.length(); j++) {
        if(str[j] == ' ') {
          reverse(str.begin()+i, str.begin()+j);
          i = j + 1;
        }
      }
      reverse(str.begin()+i, str.end());
      return str;
    }

    // aexaabcbbde , OP: a
    char get_max_char(string str) {
      int arr[26] = {0};

      for(int i = 0; i<str.length(); i++) {
        char ch = str[i];

        int index =  0;
        if(ch>='a' && ch<='z') {
          index = ch - 'a';
        } else {
          index = ch - 'A';
        }
        arr[index]++;
      }
      int maxi = -1, ans = 0;
      for(int i = 0; i<26; i++) {
        if(arr[i] > maxi) {
          ans = i;
          maxi = arr[i];
        }
      }
      return ans+'a';
    }

    // the sky is blue, OP: the@40sky@40is@40blue
    string replace_spaces(string str) {
      for(int i = 0; i<str.length(); i++) {
        if(str[i] == ' ') {
          str.replace(i, 1, "@40");
        }
      }
      return str;
    }

    // the sky is blue - e ,  OP: th sky is blu
    void remove_char(char str[], char r) {
      int pos = 0;

      while(str[pos] != '\0') {
        if(str[pos] == r) {
          int newpos = pos;
          while(str[newpos] != '\0') {
            str[newpos] = str[newpos+1];
            newpos++;
          }
        } else pos++;
      }
    }

    // daabcbaabcbc - abc, OP: dab
    string remove_occr_substr(string str, string part) {

      while(str.length() != 0 && str.find(part) < str.length()) {
        str.erase(str.find(part), part.length());
      }
      return str;
    }
};

int main() {
  string str = "daabcbaabcbc";
  string remove = "abc";

  Solution sol;

  cout<<sol.remove_occr_substr(str, remove);
  
   
}