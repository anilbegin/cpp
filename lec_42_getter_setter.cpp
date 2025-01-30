// getter and setter

#include<iostream>
using namespace std;

class Hero {

    private:
      int health = 10;
      int power; 
      
    public:
    char level;

    int getHealth() {
      return health;
    }
    void setPower(int pow) {
      power = pow;
    }
    int getPower() {
      return power;
    }
};

int main() {
    Hero ramesh;
    
    ramesh.level = 'b';
    ramesh.setPower(22);

    cout<<"health is: "<<ramesh.getHealth()<<endl;
    cout<<"level is: "<<ramesh.level<<endl;
    cout<<"power is: "<<ramesh.getPower();
}

