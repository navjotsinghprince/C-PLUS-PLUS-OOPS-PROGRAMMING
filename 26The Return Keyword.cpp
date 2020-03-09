#include <iostream>
#include<conio.h>
using namespace std;
int myFunction(int,int);

int myFunction(int x, int y) {
  return x + y;
}

int main() {
  int z = myFunction(5, 3);
  cout << z;  // Outputs 8 (5 + 3)

  return 0;
}

//Navjot Singh Prince