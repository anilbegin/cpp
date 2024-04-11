#include<iostream>
#include<unordered_map>

using namespace std;

int main() {
  unordered_map<string, int> ourmap;
  ourmap["abc"] = 2;
  ourmap["def"] = 3;
  ourmap["ghi"] = 1;
  ourmap["jkl"] = 4;
  ourmap["mno"] = 5;
  ourmap["pqr"] = 6;

  unordered_map<string, int>:: iterator it = ourmap.begin();
  unordered_map<string, int>:: iterator it2 = ourmap.find("abc");
  ourmap.erase(it2);
  while(it != ourmap.end()) {
    cout<< "Key : "<< it->first << " Value: "<< it->second<<endl;
    it++;
  }


  
  
  
}
