// greedy alignment demo sample

#include<iostream>
using namespace std;

class Example1 {
   char c;
   double d;
   int i;
   short s;
};


class Example2 {
    double d;
    int i;
    short s;
    char c;
};

int main() {
  Example1 a;

  Example2 b;

  cout<<sizeof(a)<<endl;  // 24
  cout<<sizeof(b);        // 16

}
