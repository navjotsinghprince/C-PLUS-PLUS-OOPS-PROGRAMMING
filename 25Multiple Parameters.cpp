#include <iostream>
#include<conio.h>
using namespace std;
void myFunction(string ,int );

void myFunction(string fname, int age) {
  cout << fname << "Ji " << age << " years old. \n";
}

int main() {
 
 myFunction("Erra", 3);
  myFunction("Preeti", 14);
  myFunction("Khushi", 30);
  return 0;
}


//Remember:-that when you are working with multiple parameters, the function call must have the same number of arguments as there are parameters, and the arguments must be passed in the same order.


//Navjot Singh Prince