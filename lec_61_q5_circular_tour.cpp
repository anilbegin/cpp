//Lec:61:Q5 - circular tour

#include<iostream>
//#include<queue>
using namespace std;

struct petrolPump {
  int petrol;
  int distance;
};

class Solution {
  public:

  int tour(petrolPump p[], int n) {
    int deficit = 0;
    int balance = 0;
    int start = 0;

    for(int i= 0; i<n; i++) {
      balance += p[i].petrol - p[i].distance;
      if(balance < 0) {
        deficit += balance;
        start = i+1; // this signifies 'front = rear + 1' explanation 
        balance = 0;
      }
    }
    // to maintain single traversal, instead of going through..
    // .. the smae blocks that were previously covered. 
    if(deficit + balance >= 0) { 
      return start;
    } else {
      return -1;
    }
  }
};

int main() {
  int petrol[] = {4, 6, 7, 4};
  int distance[] = {6, 5, 3, 5};
  int n = 4;

  petrolPump p[n];

  for(int i=0 ;i<n; i++) {
    p[i].petrol = petrol[i];
    p[i].distance = distance[i];
  }

  Solution sol;
  cout<<sol.tour(p, n);
}


