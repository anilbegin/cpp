#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int main() {
  unordered_map<string, int> ourmap;
  ourmap["abc"] = 1;
  ourmap["def"] = 2;
  ourmap["ghi"] = 3;
  ourmap["jkl"] = 4;
  ourmap["mno"] = 5;
  ourmap["pqr"] = 6;

  unordered_map<string, int>:: iterator it = ourmap.begin();
  while(it != ourmap.end()) {
    cout<< "Key : "<< it->first << " Value: "<< it->second<<endl;
    it++;
  }
}
