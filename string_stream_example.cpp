#include<iostream>
#include<sstream>
using namespace std;

int total_words(string str) {
  stringstream new_str(str);
  string word;
  int count = 0;

  // >> operator allows us to read from the stringstream object.
  while(new_str >> word) {
    count++;
  }

  return count;

}

int main() {
  string str = "how many words are present here now";

  int count = total_words(str);
  
  cout<<"There are "<<count<<" words";
}

