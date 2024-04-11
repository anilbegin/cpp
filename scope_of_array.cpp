// Demo for Scope of variables in an array.
#include<iostream>
using namespace std;

void update_val(int num[], int size) {
  num[0] = 120;
  cout<<"inside the update_val function: "<<endl;
  for(int i = 0; i<size; i++) {
    cout<<num[i]<<endl;
  }
  cout<<"end of update_val function."<<endl;
}

int main() {
  int num[3] = {2, 4, 8};

  update_val(num, 3);

  cout<<"The values are"<<endl;
  for(int i = 0; i<3; i++) {
    cout<< num[i]<<endl;
  }
}