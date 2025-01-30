// Polymorphism
// operator overloading
// task: return the addition of two Objects(complex numbers)(a+bi) when we use '+' operator
#include<iostream>
using namespace std;

class Complex {
  private:
    int real, imag;
  public:
    Complex() {
      real = 0;
      imag = 0;
    }
    Complex(int r, int i) {
      real = r;
      imag = i;
    }
    void print() {
      cout<<real<<" + "<<imag<<"i"<<endl;
    }
    // Operator Overloading..
    Complex operator +(Complex c) {
      Complex temp;
      temp.real = real + c.real;
      temp.imag = imag + c.imag;
      return temp;
    }
   
};

int main() {

  Complex c1(5, 4);
  Complex c2(2, 5);
  Complex c3;
  
  c3 = c1 + c2;  // means c1.add(c2);

  c3.print();
  // what we expect is real part of c1 be added with real part of c2(5+2)
  // similarly imaginary part of c1 be added with c2(4+5)

}

