// example for mutli-line macro

#include<iostream>
using std::cout;
using std::cin;
using std::endl;

#define PRINT_RECTANGLE(width, height) {  \
    for(int i = 0; i<height; i++) {       \
      for(int j = 0; j<width; j++) {      \
        cout<<"*"<<" ";                   \
      }                                   \
      cout<<endl;                         \
    }                                     \
}                                         \

int main() {
  int height = 5;
  int width = 3;

  PRINT_RECTANGLE(height, width);
}