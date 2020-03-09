#include <iostream>
#include<conio.h>
using namespace std;

void myFunction(string fname) {  //parameters
  cout << fname << " Ferozepuria\n";
}

//When a parameter is passed to the function, it is called an argument. So, from the example above: fname is a parameter, while Navjot, Singh and Prince are arguments.
int main() {

  myFunction("Navjot"); //arguments
  myFunction("Singh");
  myFunction("Prince");
  return 0;
}

//Navjot Singh Prince