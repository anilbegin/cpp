// Lec: 61 : Q2 -
// find first negative integer in every window of size 'k'

#include<iostream>
#include<queue>
#include<vector>
using namespace std;

// 'K' is window size, 'N' is number of elements in Queue
vector<long long> printFirstNegativeInteger(long long int A[], long long int N, long long int K) {
  deque<long long int> dq; // will be storing the index value for negative interger..
                           // .. and not the value itself
  vector<long long> ans;   // will store all the first negative value encountered..
                          // .. in each window
  
  // **process first window of k size
  for(int i = 0; i<K; i++) {
    if(A[i] < 0) {
      dq.push_back(i); // **pushes "INDEX" of all negaitve integer encountered in window
    }                  // **why have we pushed indexes ? we could have directly pushed the value 
  }                    // ** its because in the below lines of code, we are popping older values..
                      // .. at the front of the window to accomodate newer value from the back..
                      // by refering or subtracting newer index number with older index number 
                          
  // store answer of first k sized window
  if(dq.size() > 0) { // check if any integer is stored in dq
    ans.push_back(A[dq.front()]); // 'via INDEX' store only the first negative integer (at front) existing inside dq 
  } else { // since 'dq' size is 0 because no negative integer was found in window..
    ans.push_back(0); // ..we push '0' into the ans   
  }

  // **preocess remaining windows
  // here in first iteration of for loop.. i = 2.
  //
  for(int i = K; i<N; i++) {
    //cout<<":dq.front- "<<dq.front()<<" :i- " << i <<" : "<<endl; // debugging
    // removal the index from front
    // !dq.empty() is applied when no index within window has a value less then 0..
    // in that case 'dq' remains empty, so in that case, pop.front() can be skipped.
    if(!dq.empty() && i - dq.front() >= K) { 
      dq.pop_front();
    }
    
    // addition from back
    if(A[i] < 0) {
      dq.push_back(i);
    }

    // ans store
    if(dq.size() > 0) {
      ans.push_back(A[dq.front()]);
    } else {
      ans.push_back(0);
    }
  }
  return ans;
}

void print_array(vector<long long> ans) {
  for(int i = 0; i<ans.size(); i++) cout<<ans[i]<<" ";
}

int main() {
  long long int A[] = {-8, 2, 3, -6, 10};
//  long long int A[] = {12, -1, -7, 8, -15, 30, 16, 28};
  long long int N = 5;
  long long int K = 2;

  vector<long long> ans = printFirstNegativeInteger(A, N, K);

  print_array(ans);
}
