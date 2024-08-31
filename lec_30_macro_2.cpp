// example for "function like macro"

// C++ program to illustrate the macro definition 
#include <iostream> 
//using namespace std;
using std::cout;
  
// Define a macro to calculate the square of a number 
#define SQUARE(x) (x * x) 
  
int main() 
{ 
    int n = 7; 
    int result = SQUARE(n); // Expands to: (n * n) 
    cout << "Square of " << n << " is " << result; 
    return 0; 
}

/*
#define min(a, b) (((a) < (b)) ? (a) : (b))

int main() {
  int a = 10;
  int b = 9;

  cout<<"minimum value is: "<<min(a, b);
}
 */