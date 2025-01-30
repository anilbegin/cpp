// lec 42
// empty class


#include<iostream>
using namespace std;

class Hero {

    //int value;
};

int main() {
    Hero h1;

    //cout<<sizeof(h1); // 4
    cout<<sizeof(h1);   // 1
    // 1 byte is allocated by system to keep track of the class
}