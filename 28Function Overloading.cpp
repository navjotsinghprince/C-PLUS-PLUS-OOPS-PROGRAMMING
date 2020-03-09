#include <iostream>
#include<conio.h>
using namespace std;
int myFunction(int,int);
float myFunction(float );
double myFunction(double , double );
//With function overloading, multiple functions can have the same name with different parameters:

int myFunction(int x, int y) {
  return x + y;
}

double myFunction(double x, double y) {
  return x + y;
}

 
int main() {
  int myNum1 = myFunction(8, 5);
  double myNum2 = myFunction(4.3, 6.26);
  cout << "Int: " << myNum1 << "\n";
  cout << "Double: " << myNum2;
  return 0;
}

//Navjot Singh Prince