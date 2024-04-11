// Vectors

#include<iostream>
#include<vector>
using namespace std;

int main() {

  vector<int> v; // vector with name 'v' declared

  cout<<"Memory allocated to vector 'v' is "<<v.capacity();
  // OP's the amount of memory allocated to Vector 'v'

  cout<<endl;
  
  v.push_back(1);
  cout<<"Now Memory allocated to vector 'v' is "<<v.capacity();

  cout<<endl;

  v.push_back(23);
  cout<<"Now Memory allocated to vector 'v' is "<<v.capacity();

   cout<<endl;

  v.push_back(34);
  cout<<"Now Memory allocated to vector 'v' is "<<v.capacity();

     cout<<endl;

  v.push_back(343);
  cout<<"Now Memory allocated to vector 'v' is "<<v.capacity();
  // OP: Now Memory allocated to vector 'v' is 4

  cout<<endl;

  v.push_back(349);
  cout<<"Now Memory allocated to vector 'v' is "<<v.capacity();
  // OP: Now Memory allocated to vector 'v' is 8

  cout<<endl;

  cout<<"The size of the array is: "<<v.size();
  //OP: The size of the array is: 5 
  cout<<endl;
  cout<<"element on index 3 is: "<<v.at(3);

  cout<<endl;

  cout<<"first element in the vector: "<<v.front();

  cout<<endl;

  cout<<"last element in the vector: "<<v.back()<<endl;

  cout<<"before pop: ";
  for(int i:v) {
    cout<<i<<" ";
  }

  v.pop_back();
  cout<<endl<<"After pop: ";
  
  for(int i:v) {
    cout<<i<<" ";
  }

  cout<<endl<<"before clear, size is: "<<v.size()<<", capacity is: "<<v.capacity();
  v.clear();
  cout<<endl<<"after clear, size is: "<<v.size()<<", capacity is: "<<v.capacity();

  cout<<endl<<v.capacity();
}


