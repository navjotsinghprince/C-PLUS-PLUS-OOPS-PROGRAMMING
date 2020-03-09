#include <iostream>
#include<conio.h>
using namespace std;

//When executing C++ code, different errors can occur: coding errors made by the programmer, errors due to wrong input, or other unforeseeable things.

//When an error occurs, C++ will normally stop and generate an error message. The technical term for this is: C++ will throw an exception (throw an error).

int main() {

 try {   // Block of code to try

  int age = 15;
  if (age > 18) {
    cout << "Access granted - you are old enough.";
  } else {
    throw (age); // Throw an exception when a problem arise
  }
}

catch (int myNum) {  // Block of code to handle errors
  cout << "Access denied - You must be at least 18 years old.\n";
  cout << "Age is: " << myNum;
}
  return 0;
}

//catch (...) == handle any type of exception

//Navjot Singh Prince