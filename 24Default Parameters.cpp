#include <iostream>
#include<conio.h>
using namespace std;
void myFunction(string);
//use a default parameter value, by using the equals sign (=).
//If we call the function without an argument, it uses the default value ("Norway"):
 void myFunction(string country = "PHP") {
  cout << country << "\n";
}


int main() {

  myFunction("HtMl");
  myFunction("css");
  myFunction();
  myFunction("javascript");
  return 0;
}



//A parameter with a default value, is often known as an "optional parameter". From the example above, country is an optional parameter and "PHP" is the default value.
//Navjot Singh Prince