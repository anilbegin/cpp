// padding and greedy alignment demo sample

#include<iostream>
using namespace std;

class Hero {
  private:
    char level = 'a';
    int stage = 1;
  public:
    char getLevel() {
      return level;
    }
    void setStage(int num) {
      stage = num;
    }
    int getStage() {
      return stage;
    }
    int getSizeOfLevel() {
      return sizeof(level);
    }
    int getSizeOfStage() {
      return sizeof(stage);
    }
};

int main() {
  Hero ramesh;

  cout<<"sizeof(level)-char "<<ramesh.getSizeOfLevel()<<endl; // 1
  cout<<"sizeof(stage)-int "<<ramesh.getSizeOfStage()<<endl;  // 4
  cout<<"sizeof(ramesh) "<<sizeof(ramesh);            //  8 ?? why
}  
