// String compression

#include<iostream>
#include<vector>
using namespace std;

int string_compression(vector<char>& chars) {
 int i = 0; 
 int ansIndex = 0; 
 // ansIndex - valid character, and valid character count will be stored using this
 int n = chars.size();

 while(i<n) {
  int j = i+1;
  while(j<n && chars[i] == chars[j]) {
    j++;
  }
  //yaha kab aaoge
  //ya toh vector poora traverse kar diya
  //ya phir new/different character encounter kar diya

  // old char Store karlo i.e
  // store the character in the array first, whose counting is already done
  chars[ansIndex++] = chars[i]; 
  

  int count = j-i; // now j is on index of next new character,
  //..so newIndex - index number of first occurence of previous character...
  // = count of the previous character 

  if(count>1) {
    //converting counting into single digit and saving in answer
    string cnt = to_string(count);
    for(char ch : cnt) {
      chars[ansIndex++]  = ch; 
      // insert the count of the character on next index
    }
  }
  i=j;
 }
 return ansIndex;
}

void print_array(vector<char> chars) {
  for(char ch : chars) cout<<ch<<" ";
}

int main() {
  vector<char> chars {'a', 'a', 'a', 'b', 'b','b', 'b','b', 'b','b', 'b','b', 'b', 'a', 'a'};

  cout<<string_compression(chars);
  cout<<"\n";
  print_array(chars); // OP: for the above Input i.e
  // i/p: {'a', 'a', 'a', 'b', 'b','b', 'b','b', 'b','b', 'b','b', 'b', 'a', 'a'}
  // the print_array().. o/p: a 3 b 1 0 a 2 b b b b b b a a
  // whereas we expect it as.. a 3 b 1 0 a 2, the desripency is because we are inserting our.. 
  // solution in the Original array, so we will have the previous values in the unmodified indexes..
  // .. present as it is. 
  // the o/p fpr string _compression() .. is 7 in this case because, its returning the ansIndex..
  //.. i.e the index number++ where the last count of last character has to be stored. 
}
